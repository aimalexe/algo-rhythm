//  Definition for singly-linked list.
function ListNode(val, next) {
    this.val = (val === undefined ? 0 : val)
    this.next = (next === undefined ? null : next)
}


/**
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function (head) {
    let slow = head;
    let fast = head;
    let stack = [];

    // Step 1: Push the first half of the linked list to the stack
    while (fast !== null && fast.next !== null) {
        stack.push(slow.val);
        slow = slow.next;
        fast = fast.next.next;
    }

    // Step 2: If the length of the list is odd, skip the middle element
    if (fast !== null) {
        slow = slow.next;
    }

    // Step 3: Compare the second half of the list with the stack
    while (slow !== null) {
        let top = stack.pop();
        if (top !== slow.val) {
            return false;
        }
        slow = slow.next;
    }

    return true;
};

// Test Cases to validate the solution
const testCases = [
    { input: [1, 2, 2, 1], expected: true },
    { input: [1, 2], expected: false },
    { input: [1], expected: true },
    { input: [], expected: true }
];

testCases.forEach(({ input, expected }, index) => {
    const head = createLinkedList(input);
    const result = isPalindrome(head);
    console.log(`Test Case ${index + 1}: ${result === expected ? "Passed" : "Failed"}`);
});

function createLinkedList(arr) {
    let dummy = new ListNode();
    let current = dummy;
    for (let val of arr) {
        current.next = new ListNode(val);
        current = current.next;
    }
    return dummy.next;
}
