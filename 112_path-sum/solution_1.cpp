#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    /**
     * @brief Recursive function to check if a path sum exists from root to leaf.
     *
     * @param root Pointer to the current node.
     * @param targetSum The remaining target sum to be checked.
     * @return true If a root-to-leaf path exists with the target sum.
     * @return false Otherwise.
     */
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return false; // If root is null, return false

        // Check if it's a leaf node and the target sum equals the node's value
        if (!root->left && !root->right)
            return root->val == targetSum;

        // Recursively check the left and right subtree with the updated target sum
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};

int main()
{
    Solution sol;
    // Example 1
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);

    int targetSum = 22;
    cout << "Path Sum Exists: " << (sol.hasPathSum(root, targetSum) ? "True" : "False") << endl;

    return 0;
}
