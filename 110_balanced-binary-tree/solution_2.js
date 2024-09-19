/**
 * Definition for a binary tree node.
 * @param {number} val
 * @param {TreeNode|null} left
 * @param {TreeNode|null} right
 */
function TreeNode(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
}

/**
 * @brief Helper function to check if a tree is height-balanced.
 * 
 * @param {TreeNode} root - The root of the binary tree.
 * @return {number} - Returns the height of the tree if balanced, -1 if not.
 */
function checkHeight(root) {
    if (root === null) return 0;

    const leftHeight = checkHeight(root.left);
    if (leftHeight === -1) return -1;  // Not balanced

    const rightHeight = checkHeight(root.right);
    if (rightHeight === -1) return -1;  // Not balanced

    if (Math.abs(leftHeight - rightHeight) > 1) return -1;  // Not balanced

    return Math.max(leftHeight, rightHeight) + 1;  // Return height
}

/**
 * @brief Determines if the binary tree is height-balanced.
 * 
 * @param {TreeNode} root - The root of the binary tree.
 * @return {boolean} - Returns true if the tree is height-balanced, false otherwise.
 */
function isBalanced(root) {
    return checkHeight(root) !== -1;
}

// Test Example 1
const root1 = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
console.log(`Tree 1 is ${isBalanced(root1) ? "" : "not "}balanced`);

// Test Example 2
const root2 = new TreeNode(1, new TreeNode(2, new TreeNode(3, new TreeNode(4), new TreeNode(4)), new TreeNode(3)), new TreeNode(2));
console.log(`Tree 2 is ${isBalanced(root2) ? "" : "not "}balanced`);
