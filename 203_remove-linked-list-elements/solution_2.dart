class ListNode {
  int val;
  ListNode? next;
  
  ListNode(this.val, [this.next]);
}

class Solution {
  ListNode? removeElements(ListNode? head, int val) {
    // Create a dummy node that points to the head
    ListNode? dummy = ListNode(-1);
    dummy.next = head;
    ListNode? current = dummy;
    
    // Traverse the list and remove nodes with the target value
    while (current?.next != null) {
      if (current!.next!.val == val) {
        current.next = current.next!.next;
      } else {
        current = current.next;
      }
    }
    
    // Return the updated list, starting from the original head
    return dummy.next;
  }
}

// Helper function to print the list
void printList(ListNode? head) {
  while (head != null) {
    print(head.val);
    head = head.next;
  }
}

void main() {
  Solution sol = Solution();

  // Create linked list 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
  ListNode head = ListNode(1, ListNode(2, ListNode(6, ListNode(3, ListNode(4, ListNode(5, ListNode(6)))))));

  print("Original list:");
  printList(head);

  // Remove elements with value 6
  head = sol.removeElements(head, 6)!;

  print("\nUpdated list:");
  printList(head);
}
