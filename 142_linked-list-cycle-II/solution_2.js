
/**
 * Detects where the cycle begins in a linked list.
 * @param {ListNode} head
 * @return {ListNode | null}
 */
var detectCycle = function (head) {
    if (!head || !head.next) return null;

    let slow = head;
    let fast = head;

    // Step 1: Detect if a cycle exists
    while (fast && fast.next) {
        slow = slow.next;
        fast = fast.next.next;

        if (slow === fast) {
            // Step 2: Reset one pointer to the head
            slow = head;

            // Step 3: Move both pointers one step at a time
            while (slow !== fast) {
                slow = slow.next;
                fast = fast.next;
            }

            return slow;  // This is the starting node of the cycle
        }
    }

    return null;  // No cycle
};

// Example usage:

function ListNode(val) {
    this.val = val;
    this.next = null;
}

// Example linked list: 3 -> 2 -> 0 -> -4 -> cycle to 2
let node1 = new ListNode(3);
let node2 = new ListNode(2);
let node3 = new ListNode(0);
let node4 = new ListNode(-4);
node1.next = node2;
node2.next = node3;
node3.next = node4;
node4.next = node2;  // Cycle

let result = detectCycle(node1);
if (result) {
    console.log("Cycle starts at node with value:", result.val);
} else {
    console.log("No cycle detected");
}
