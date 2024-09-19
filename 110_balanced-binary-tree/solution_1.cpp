#include <iostream>
#include <cmath>
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
private:
    /**
     * @brief Helper function to check if a tree is height-balanced.
     *
     * @param root Pointer to the root of the binary tree.
     * @return int Returns the height of the tree if balanced, -1 if not.
     */
    int checkHeight(TreeNode *root)
    {
        if (!root)
            return 0;

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1)
            return -1; // Not balanced

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1)
            return -1; // Not balanced

        if (abs(leftHeight - rightHeight) > 1)
            return -1; // Not balanced

        return max(leftHeight, rightHeight) + 1; // Return height
    }

public:
    /**
     * @brief Determines if the binary tree is height-balanced.
     *
     * @param root Pointer to the root of the binary tree.
     * @return bool Returns true if the tree is height-balanced, false otherwise.
     */
    bool isBalanced(TreeNode *root)
    {
        return checkHeight(root) != -1;
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

    cout << "Tree 1 is " << (sol.isBalanced(root1) ? "" : "not ") << "balanced." << endl;

    // Example 2
    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->left = new TreeNode(3);
    root2->left->right = new TreeNode(3);
    root2->left->left->left = new TreeNode(4);
    root2->left->left->right = new TreeNode(4);

    cout << "Tree 2 is " << (sol.isBalanced(root2) ? "" : "not ") << "balanced." << endl;

    return 0;
}
