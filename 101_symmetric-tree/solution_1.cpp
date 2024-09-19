#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
private:
    // Helper function to check if two subtrees are mirrors of each other.
    bool isMirror(TreeNode *left, TreeNode *right)
    {
        // Base cases
        if (!left && !right)
            return true; // Both are null
        if (!left || !right)
            return false; // One is null, the other isn't

        // Check if the values match and recursively check for their children
        return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }

public:
    // Main function to check if the tree is symmetric.
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true; // An empty tree is symmetric
        return isMirror(root->left, root->right);
    }
};

// Helper function to run test cases
void runTest(TreeNode *root, bool expected)
{
    Solution sol;
    bool result = sol.isSymmetric(root);
    cout << "Symmetric: " << (result ? "true" : "false") << " | Expected: " << (expected ? "true" : "false") << endl;
}

// Test cases
int main()
{
    // Example 1: Symmetric
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(3);
    root1->left->right = new TreeNode(4);
    root1->right->left = new TreeNode(4);
    root1->right->right = new TreeNode(3);
    runTest(root1, true);

    // Example 2: Asymmetric
    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->right = new TreeNode(3);
    root2->right->right = new TreeNode(3);
    runTest(root2, false);

    // Add more test cases as needed
    return 0;
}
