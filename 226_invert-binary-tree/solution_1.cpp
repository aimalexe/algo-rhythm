#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    /**
     * Recursively inverts the binary tree.
     *
     * @param root The root node of the binary tree.
     * @return The root of the inverted binary tree.
     */
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return root;

        // Recursively invert the left and right subtrees
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);

        // Swap the left and right children
        root->left = right;
        root->right = left;

        return root;
    }
};

// Utility function to print the tree in pre-order traversal
void preorderPrint(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main()
{
    // Creating the tree for test case 1
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original Tree (Pre-order): ";
    preorderPrint(root);
    cout << endl;

    Solution s;

    // Inverting the tree
    root = s.invertTree(root);

    cout << "Inverted Tree (Pre-order): ";
    preorderPrint(root);
    cout << endl;

    return 0;
}
