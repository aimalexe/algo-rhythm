# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        # Base case: if the list is empty or has only one node, return it
        if not head or not head.next:
            return head
        
        # Recursively remove duplicates from the rest of the list
        head.next = self.deleteDuplicates(head.next)
        
        # If the current node and next node have the same value, skip the next node
        return head.next if head.val == head.next.val else head

# Helper function to print the list (for testing purposes)
def printList(head):
    current = head
    while current:
        print(current.val, end=" ")
        current = current.next
    print()

# Test cases
if __name__ == "__main__":
    solution = Solution()
    
    # Test case 1: [1, 1, 2]
    test1 = ListNode(1, ListNode(1, ListNode(2)))
    result1 = solution.deleteDuplicates(test1)
    print("Test 1:", end=" ")
    printList(result1)  # Expected output: 1 2
    
    # Test case 2: [1, 1, 2, 3, 3]
    test2 = ListNode(1, ListNode(1, ListNode(2, ListNode(3, ListNode(3)))))
    result2 = solution.deleteDuplicates(test2)
    print("Test 2:", end=" ")
    printList(result2)  # Expected output: 1 2 3
