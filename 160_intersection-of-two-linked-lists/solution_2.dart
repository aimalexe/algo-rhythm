class ListNode {
  int val;
  ListNode? next;
  ListNode(this.val);
}

/**
 * Function to find the intersection node of two linked lists.
 * @param headA: the head of the first linked list.
 * @param headB: the head of the second linked list.
 * @return the intersection node or null if no intersection exists.
 */
ListNode? getIntersectionNode(ListNode? headA, ListNode? headB) {
  // Function to get the length of a linked list.
  int getLength(ListNode? node) {
    int length = 0;
    while (node != null) {
      length++;
      node = node.next;
    }
    return length;
  }

  int lenA = getLength(headA);
  int lenB = getLength(headB);

  // Align the starting points by adjusting the longer list
  while (lenA > lenB) {
    headA = headA!.next;
    lenA--;
  }
  while (lenB > lenA) {
    headB = headB!.next;
    lenB--;
  }

  // Traverse both lists simultaneously until the intersection is found
  while (headA != headB) {
    headA = headA!.next;
    headB = headB!.next;
  }

  return headA; // This will be the intersection node or null
}

// Test case
void main() {
  // Creating intersection example
  ListNode intersectNode = ListNode(8);
  intersectNode.next = ListNode(4);
  intersectNode.next!.next = ListNode(5);

  // List A
  ListNode headA = ListNode(4);
  headA.next = ListNode(1);
  headA.next!.next = intersectNode;

  // List B
  ListNode headB = ListNode(5);
  headB.next = ListNode(6);
  headB.next!.next = ListNode(1);
  headB.next!.next!.next = intersectNode;

  ListNode? intersection = getIntersectionNode(headA, headB);
  if (intersection != null) {
    print("Intersected at node with value: ${intersection.val}");
  } else {
    print("No intersection.");
  }
}
