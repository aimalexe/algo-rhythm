class TreeNode {
    val: number;
    left: TreeNode | null;
    right: TreeNode | null;
    constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
        this.val = (val === undefined ? 0 : val);
        this.left = (left === undefined ? null : left);
        this.right = (right === undefined ? null : right);
    }
}

function hasPathSum(root: TreeNode | null, targetSum: number): boolean {
    if (!root) return false;

    const stack: Array<[TreeNode, number]> = [[root, targetSum - root.val]];

    while (stack.length > 0) {
        const [node, currentSum] = stack.pop()!;

        // Check if it's a leaf node and currentSum becomes 0
        if (!node.left && !node.right && currentSum === 0)
            return true;

        // Push the right child to the stack if it exists
        if (node.right)
            stack.push([node.right, currentSum - node.right.val]);


        // Push the left child to the stack if it exists
        if (node.left)
            stack.push([node.left, currentSum - node.left.val]);
    }

    return false;
}

// Example usage
const root = new TreeNode(5);
root.left = new TreeNode(4);
root.right = new TreeNode(8);
root.left.left = new TreeNode(11);
root.right.left = new TreeNode(13);
root.right.right = new TreeNode(4);
root.left.left.left = new TreeNode(7);
root.left.left.right = new TreeNode(2);
root.right.right.right = new TreeNode(1);

const targetSum = 22;
console.log(`Path Sum Exists: ${hasPathSum(root, targetSum) ? "True" : "False"}`);
