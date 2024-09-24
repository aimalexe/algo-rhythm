class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        """
        Recursively reverses the linked list.
        :param head: The head of the singly linked list.
        :return: The new head of the reversed list.
        """
        if not head or not head.next:
            return head
        
        new_head = self.reverseList(head.next)
        head.next.next = head
        head.next = None
        return new_head

def printList(head: ListNode):
    while head:
        print(head.val, end=" ")
        head = head.next
    print()

# Test cases for the recursive approach
def runTests():
    # Create test case linked list: 1 -> 2 -> 3 -> 4 -> 5
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    
    # Print original list
    print("Original List:", end=" ")
    printList(head)
    
    sol = Solution();
    # Reverse the list
    reversed_head = sol.reverseList(head)
    
    # Print reversed list
    print("Reversed List:", end=" ")
    printList(reversed_head)

if __name__ == "__main__":
    runTests()
