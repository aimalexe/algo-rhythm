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
 * Iterative postorder traversal of the binary tree
 * @param {TreeNode} root
 * @return {number[]}
 */
function postorderTraversal(root) {
    if (!root) return [];

    let stack = [root];
    let result = [];

    while (stack.length > 0) {
        let node = stack.pop();
        result.push(node.val);  // Process node after right and left children
        if (node.left) stack.push(node.left);  // Push left child first
        if (node.right) stack.push(node.right);  // Push right child second
    }

    return result.reverse();  // Reverse the result for postorder
}

// Test cases to validate the solution
function testPostorderTraversal() {
    const testCases = [
        { input: new TreeNode(1, null, new TreeNode(2, new TreeNode(3))), expected: [3, 2, 1] },
        {
            input: new TreeNode(1,
                new TreeNode(2, new TreeNode(4), new TreeNode(5, new TreeNode(6), new TreeNode(7))),
                new TreeNode(3, null, new TreeNode(8, null, new TreeNode(9)))
            ),
            expected: [4, 6, 7, 5, 2, 9, 8, 3, 1]
        },
        { input: null, expected: [] },
        { input: new TreeNode(1), expected: [1] },
        { input: new TreeNode(1, new TreeNode(2), new TreeNode(3)), expected: [2, 3, 1] }
    ];

    testCases.forEach(({ input, expected }, index) => {
        const result = postorderTraversal(input);
        const isSuccess = JSON.stringify(result) === JSON.stringify(expected);
        console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    });
}

// Run the test cases
testPostorderTraversal();
