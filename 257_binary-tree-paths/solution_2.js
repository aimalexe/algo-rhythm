
// Definition for a binary tree node.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}


/**
 * Function to collect all root-to-leaf paths in a binary tree.
 * @param {TreeNode} root - The root of the binary tree.
 * @return {string[]} - An array of strings representing all root-to-leaf paths.
 */
var binaryTreePaths = function (root) {
    const paths = []; // Array to store all paths
    if (!root) return paths; // If the tree is empty, return an empty array

    // Stack to hold nodes and their corresponding paths
    const stack = [{ node: root, path: root.val.toString() }];

    while (stack.length > 0) {
        const { node, path } = stack.pop(); // Get the current node and path

        // If it's a leaf node, add the path to the list of paths
        if (!node.left && !node.right)
            paths.push(path);
        else {
            // If there's a right child, add it to the stack with the updated path
            if (node.right) 
                stack.push({ node: node.right, path: path + '->' + node.right.val });
            // If there's a left child, add it to the stack with the updated path
            if (node.left)
                stack.push({ node: node.left, path: path + '->' + node.left.val });
        }
    }

    return paths; // Return all paths found
};

// Test cases to validate the solution
const root = new TreeNode(1);
root.left = new TreeNode(2);
root.right = new TreeNode(3);
root.left.right = new TreeNode(5);

const paths = binaryTreePaths(root);
console.log("Root-to-Leaf Paths:", paths); // Output the paths
