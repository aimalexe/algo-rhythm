class TreeNode {
  int val;
  TreeNode? left;
  TreeNode? right;
  TreeNode(this.val, [this.left, this.right]);
}

class Solution {
  /**
   * @brief Helper function to recursively build height-balanced BST.
   * 
   * @param nums The sorted array of integers.
   * @param left The left bound index of the current subarray.
   * @param right The right bound index of the current subarray.
   * @return TreeNode The root of the height-balanced BST.
   */
  TreeNode? sortedArrayToBSTUtil(List<int> nums, int left, int right) {
    if (left > right) return null;

    int mid = left + (right - left) ~/ 2; // Calculate mid index
    TreeNode root = TreeNode(nums[mid]);

    // Recursively build left and right subtrees
    root.left = sortedArrayToBSTUtil(nums, left, mid - 1);
    root.right = sortedArrayToBSTUtil(nums, mid + 1, right);

    return root;
  }

  /**
   * @brief Converts a sorted array to a height-balanced BST.
   * 
   * @param nums The sorted array of integers.
   * @return TreeNode The root of the height-balanced BST.
   */
  TreeNode? sortedArrayToBST(List<int> nums) {
    return sortedArrayToBSTUtil(nums, 0, nums.length - 1);
  }
}

// Helper function for testing to print inorder traversal
void inOrderTraversal(TreeNode? root) {
  if (root == null) return;
  inOrderTraversal(root.left);
  print(root.val);
  inOrderTraversal(root.right);
}

void main() {

  Solution sol = Solution();
  // Test case 1
  List<int> nums1 = [-10, -3, 0, 5, 9];
  TreeNode? bst1 = sol.sortedArrayToBST(nums1);
  print('Inorder traversal of BST1:');
  inOrderTraversal(bst1);

  // Test case 2
  List<int> nums2 = [1, 3];
  TreeNode? bst2 = sol.sortedArrayToBST(nums2);
  print('Inorder traversal of BST2:');
  inOrderTraversal(bst2);
}
