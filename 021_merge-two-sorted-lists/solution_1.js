/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
class ListNode {
    constructor(val = 0, next = null) {
        this.val = val;
        this.next = next;
    }
};

/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */

function mergeTwoLists(list1, list2) {
    let dummyNode = new ListNode(); // Create a dummy node to simplify the head handling
    let current = dummyNode;       // This will point to the last node in the merged list

    // Traverse both lists and append the smaller value to the merged list
    while (list1 && list2) {
        if (list1.val < list2.val) {
            current.next = list1;
            list1 = list1.next;
        } else {
            current.next = list2;
            list2 = list2.next;
        }
        current = current.next;
    }

    // Attach the remaining elements of list1 or list2
    current.next = list1 || list2;

    return dummyNode.next; // Return the merged list starting from the node after dummy
}

// Helper function to create a linked list from an array
function createList(elements) {
    let dummy = new ListNode();
    let current = dummy;
    for (let element of elements) {
        current.next = new ListNode(element);
        current = current.next;
    }
    return dummy.next;
}

// Helper function to print the linked list
function printList(head) {
    let result = [];
    while (head) {
        result.push(head.val);
        head = head.next;
    }
    console.log(result.join(' -> '));
}

// Test cases
let list1 = createList([1, 2, 4]);
let list2 = createList([1, 3, 4]);
printList(mergeTwoLists(list1, list2)); // Expected: 1 -> 1 -> 2 -> 3 -> 4 -> 4

let list3 = createList([]);
let list4 = createList([]);
printList(mergeTwoLists(list3, list4)); // Expected: 

let list5 = createList([]);
let list6 = createList([0]);
printList(mergeTwoLists(list5, list6)); // Expected: 0

// Additional test case: testing with negative numbers and zeros
let list7 = createList([-3, -1, 0]);
let list8 = createList([-2, 4, 5]);
printList(mergeTwoLists(list7, list8)); // Expected: -3 -> -2 -> -1 -> 0 -> 4 -> 5
