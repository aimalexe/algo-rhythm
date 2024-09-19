// Definition for a binary tree node.
function TreeNode(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
}

class Solution {
    /**
     * Recursively checks if two binary trees are the same.
     * @param {TreeNode} p - root of the first tree.
     * @param {TreeNode} q - root of the second tree.
     * @return {boolean} - true if both trees are identical, false otherwise.
     */
    isSameTree(p, q) {
        // If both nodes are null, they are identical
        if (!p && !q) return true;

        // If one of the nodes is null or values differ, trees are not the same
        if (!p || !q || p.val !== q.val) return false;

        // Recursively compare left and right subtrees
        return this.isSameTree(p.left, q.left) && this.isSameTree(p.right, q.right);
    }
}

// Helper function to create test cases
function createTestTree1() {
    const root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    return root;
}

function createTestTree2() {
    const root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(3);
    return root;
}

function createTestTree3() {
    const root = new TreeNode(1);
    root.left = new TreeNode(2);
    root.right = new TreeNode(1);
    return root;
}

// Test cases
function runTests() {
    const solution = new Solution();

    const p1 = createTestTree1();
    const q1 = createTestTree2();
    const p2 = createTestTree1();
    const q2 = createTestTree3();

    // Test Case 1: Identical trees
    console.log("Test Case 1: " + (solution.isSameTree(p1, q1) == true ? "Passed ✅" : "Failed ❌")); // Expected: true

    // Test Case 2: Different trees
    console.log("Test Case 2: " + (solution.isSameTree(p2, q2) == false ? "Passed ✅" : "Failed ❌")); // Expected: false
}

runTests();
