/**
 * Definition for singly-linked list.
 * @param {number} val
 * @param {ListNode|null} next
 */
function ListNode(val, next = null) {
    this.val = val;
    this.next = next;
}

/**
 * Adds two numbers represented by linked lists.
 * @param {ListNode} l1 - The first linked list.
 * @param {ListNode} l2 - The second linked list.
 * @return {ListNode} - The resulting linked list after addition.
 */
function addTwoNumbers(l1, l2) {
    let dummyHead = new ListNode(0); // Dummy head for result list
    let current = dummyHead;
    let carry = 0;

    // Traverse both lists
    while (l1 !== null || l2 !== null) {
        let x = (l1 !== null) ? l1.val : 0;
        let y = (l2 !== null) ? l2.val : 0;
        let sum = carry + x + y;

        carry = Math.floor(sum / 10);
        current.next = new ListNode(sum % 10); // Create new node for current sum's digit
        current = current.next;

        // Move to next nodes
        if (l1 !== null) l1 = l1.next;
        if (l2 !== null) l2 = l2.next;
    }

    // Check for any remaining carry
    if (carry > 0) {
        current.next = new ListNode(carry);
    }

    return dummyHead.next; // Return result list skipping dummy head
}

/**
 * Helper function to create a linked list from an array.
 * @param {number[]} arr - Array of values to create the linked list.
 * @return {ListNode} - The head of the linked list.
 */
function createLinkedList(arr) {
    let dummyHead = new ListNode(0);
    let current = dummyHead;
    for (let num of arr) {
        current.next = new ListNode(num);
        current = current.next;
    }
    return dummyHead.next;
}

/**
 * Helper function to print a linked list.
 * @param {ListNode} head - The head of the linked list.
 */
function printLinkedList(head) {
    let output = [];
    while (head !== null) {
        output.push(head.val);
        head = head.next;
    }
    console.log(output.join(' -> '));
}

/**
 * Test cases to validate the solution.
 */
function runTests() {
    let testCases = [
        { input1: [2, 4, 3], input2: [5, 6, 4], expected: [7, 0, 8] }, // 342 + 465 = 807
        { input1: [0], input2: [0], expected: [0] },                  // 0 + 0 = 0
        { input1: [9, 9, 9], input2: [1], expected: [0, 0, 0, 1] },   // 999 + 1 = 1000
        { input1: [1, 8], input2: [0], expected: [1, 8] },            // 81 + 0 = 81
        { input1: [5], input2: [5], expected: [0, 1] }                // 5 + 5 = 10
    ];

    testCases.forEach(({ input1, input2, expected }, index) => {
        const l1 = createLinkedList(input1);
        const l2 = createLinkedList(input2);

        console.log(`Test Case ${index + 1}:`);
        console.log('  Input:');
        printLinkedList(l1);
        printLinkedList(l2);

        const result = addTwoNumbers(l1, l2);
        console.log('  Result:');
        printLinkedList(result);

        console.log('\n');
    });
}

// Run the tests
runTests();
