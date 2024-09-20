# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    """
    This function detects whether the linked list has a cycle.
    :param head: head of the linked list
    :return: True if a cycle is detected, False otherwise
    """
    def hasCycle(self, head):
        visited = set()  # Set to store visited nodes
        
        while head:
            if head in visited:  # Cycle detected if node revisited
                return True
            visited.add(head)
            head = head.next  # Move to next node
            
        return False  # No cycle found

# Test Cases for Python
def test_solution():
    solution = Solution()

    # Test Case 1: Cycle exists
    node1 = ListNode(3)
    node2 = ListNode(2)
    node3 = ListNode(0)
    node4 = ListNode(-4)
    node1.next = node2
    node2.next = node3
    node3.next = node4
    node4.next = node2  # Cycle here
    assert solution.hasCycle(node1) == True, "Test Case 1 Failed"

    # Test Case 2: Single node, no cycle
    node5 = ListNode(1)
    assert solution.hasCycle(node5) == False, "Test Case 2 Failed"

    # Test Case 3: No cycle, two nodes
    node6 = ListNode(1)
    node7 = ListNode(2)
    node6.next = node7
    assert solution.hasCycle(node6) == False, "Test Case 3 Failed"

    # Test Case 4: Cycle in two nodes
    node8 = ListNode(1)
    node9 = ListNode(2)
    node8.next = node9
    node9.next = node8  # Cycle here
    assert solution.hasCycle(node8) == True, "Test Case 4 Failed"

    # Test Case 5: Empty list
    assert solution.hasCycle(None) == False, "Test Case 5 Failed"

    print("All test cases passed!")

# Run tests
test_solution()
