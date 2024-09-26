import 'dart:collection';

// Definition for a binary tree node.
class TreeNode {
  int val;
  TreeNode? left;
  TreeNode? right;
  TreeNode(this.val, {this.left, this.right});
}

class Solution {
  /**
   * Iteratively inverts the binary tree using BFS.
   * 
   * @param root The root node of the binary tree.
   * @return The root of the inverted binary tree.
   */
  TreeNode? invertTree(TreeNode? root) {
    if (root == null) return null;

    // Queue for level-order traversal (BFS)
    Queue<TreeNode?> queue = Queue<TreeNode?>();
    queue.add(root);

    while (queue.isNotEmpty) {
      TreeNode? current = queue.removeFirst();

      // Swap the left and right children
      TreeNode? temp = current?.left;
      current?.left = current.right;
      current?.right = temp;

      // Add left and right children to the queue for further processing
      if (current?.left != null) queue.add(current?.left);
      if (current?.right != null) queue.add(current?.right);
    }

    return root;
  }
}

// Utility function to print the tree in pre-order traversal
void preorderPrint(TreeNode? root) {
  if (root == null) return;
  print(root.val);
  preorderPrint(root.left);
  preorderPrint(root.right);
}

void main() {
  // Creating the tree for test case 1
  TreeNode root = TreeNode(4);
  root.left = TreeNode(2, left: TreeNode(1), right: TreeNode(3));
  root.right = TreeNode(7, left: TreeNode(6), right: TreeNode(9));

  print("Original Tree (Pre-order):");
  preorderPrint(root);

  // Inverting the tree
  Solution s = Solution();
  s.invertTree(root);

  print("Inverted Tree (Pre-order):");
  preorderPrint(root);
}
