#include <iostream>
#include <algorithm>
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
     * @brief Function to compute the minimum depth of a binary tree.
     *
     * @param root Pointer to the root of the binary tree.
     * @return int The minimum depth from root to the nearest leaf node.
     */
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        // If either subtree is null, recurse into the non-null subtree
        if (root->left == nullptr)
            return minDepth(root->right) + 1;
        if (root->right == nullptr)
            return minDepth(root->left) + 1;

        // Otherwise, take the minimum depth of the two subtrees
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};

int main()
{
    Solution sol;

    // Example 1
    TreeNode *root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);

    cout << "Minimum depth of tree 1: " << sol.minDepth(root1) << endl;

    // Example 2
    TreeNode *root2 = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->right->right = new TreeNode(4);
    root2->right->right->right = new TreeNode(5);
    root2->right->right->right->right = new TreeNode(6);

    cout << "Minimum depth of tree 2: " << sol.minDepth(root2) << endl;

    return 0;
}
