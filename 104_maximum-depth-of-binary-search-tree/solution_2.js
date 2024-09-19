/**
 * Definition for a binary tree node.
 * @param {number} val
 * @param {TreeNode} left
 * @param {TreeNode} right
 */
function TreeNode(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
}

/**
 * @function maxDepth
 * @description Computes the maximum depth of a binary tree using BFS.
 * @param {TreeNode} root - The root node of the binary tree.
 * @returns {number} - The maximum depth of the binary tree.
 */
const maxDepth = function(root) {
    if (!root) return 0; // If the tree is empty.
    let depth = 0;
    const queue = [root];

    while (queue.length) {
        depth++; // Each level traversed.
        const levelSize = queue.length;

        for (let i = 0; i < levelSize; i++) {
            const node = queue.shift();
            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }
    }
    return depth;
}

// Test cases
const testCases = [
    {
        input: new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7))),
        expected: 3
    },
    {
        input: new TreeNode(1, null, new TreeNode(2)),
        expected: 2
    }
];

// Test runner
testCases.forEach(({ input, expected }, index) => {
    const startTime = performance.now();
    const result = maxDepth(input);
    const endTime = performance.now();
    const isSuccess = result === expected;

    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
