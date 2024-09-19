#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
private:
    /**
     * @brief Recursively builds a height-balanced binary search tree from sorted array.
     *
     * @param nums The sorted array of integers.
     * @param left The left bound index of the current subarray.
     * @param right The right bound index of the current subarray.
     * @return TreeNode* Pointer to the root of the height-balanced BST.
     */
    TreeNode *sortedArrayToBSTUtil(const vector<int> &nums, int left, int right)
    {
        if (left > right)
            return NULL;

        int mid = left + (right - left) / 2; // Middle element for balanced tree
        TreeNode *root = new TreeNode(nums[mid]);

        // Recursively build left and right subtrees
        root->left = sortedArrayToBSTUtil(nums, left, mid - 1);
        root->right = sortedArrayToBSTUtil(nums, mid + 1, right);

        return root;
    }

public:
    /**
     * @brief Wrapper function to convert sorted array to height-balanced BST.
     *
     * @param nums The sorted array of integers.
     * @return TreeNode* Pointer to the root of the height-balanced BST.
     */
    TreeNode *sortedArrayToBST(const vector<int> &nums)
    {
        return sortedArrayToBSTUtil(nums, 0, nums.size() - 1);
    }
};

// Helper function to print in-order traversal of the tree
void inOrderTraversal(TreeNode *root)
{
    if (!root)
        return;
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

int main()
{
    Solution sol;
    // Test case 1
    vector<int> nums1 = {-10, -3, 0, 2, 5, 9};
    TreeNode *bst1 = sol.sortedArrayToBST(nums1);
    cout << "Inorder traversal of BST1: ";
    inOrderTraversal(bst1);
    cout << endl;

    // Test case 2
    vector<int> nums2 = {1, 3};
    TreeNode *bst2 = sol.sortedArrayToBST(nums2);
    cout << "Inorder traversal of BST2: ";
    inOrderTraversal(bst2);
    cout << endl;

    return 0;
}
