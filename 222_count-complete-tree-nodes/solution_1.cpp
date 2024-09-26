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
private:
    /**
     * Finds the depth of the left-most branch of the tree
     *
     * @param node The root node.
     * @return The depth of the left-most branch.
     */
    int leftDepth(TreeNode *node)
    {
        int depth = 0;
        while (node != nullptr)
        {
            depth++;
            node = node->left;
        }
        return depth;
    }

    /**
     * Finds the depth of the right-most branch of the tree
     *
     * @param node The root node.
     * @return The depth of the right-most branch.
     */
    int rightDepth(TreeNode *node)
    {
        int depth = 0;
        while (node != nullptr)
        {
            depth++;
            node = node->right;
        }
        return depth;
    }

public:
    /**
     * Counts the number of nodes in a complete binary tree.
     * Uses binary search and tree depth to achieve O(log(n)^2) complexity.
     *
     * @param root The root node of the tree.
     * @return The total number of nodes in the tree.
     */
    int countNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        int left = leftDepth(root);
        int right = rightDepth(root);

        // If left depth == right depth, it's a full tree
        if (left == right)
            return (1 << left) - 1; // 2^depth - 1 nodes in a full tree

        // Otherwise, recursively count nodes in both subtrees
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

int main()
{
    // Test cases
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);

    Solution s;
    cout << "Total nodes in the tree: " << s.countNodes(root) << endl;
    return 0;
}
