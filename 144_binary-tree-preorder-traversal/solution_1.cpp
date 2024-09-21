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
     * Recursive function to perform preorder traversal
     * @param root Pointer to the root of the binary tree
     * @param result Vector to store the preorder traversal result
     */
    void preorderTraversalHelper(TreeNode *root, vector<int> &result)
    {
        if (!root)
            return;                                   // Base case: if root is null, return
        result.push_back(root->val);                  // Visit root node
        preorderTraversalHelper(root->left, result);  // Recur on left subtree
        preorderTraversalHelper(root->right, result); // Recur on right subtree
    }

public:
    /**
     * Function to return the preorder traversal of a binary tree
     * @param root Pointer to the root of the binary tree
     * @return A vector containing the preorder traversal
     */
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> result;
        preorderTraversalHelper(root, result); // Helper function for recursion
        return result;
    }
};

// Test cases
int main()
{   
    Solution sol;
    // Create example tree for test case 1
    TreeNode *root1 = new TreeNode(1);
    root1->right = new TreeNode(2);
    root1->right->left = new TreeNode(3);

    vector<int> result1 = sol.preorderTraversal(root1);
    cout << "Preorder Traversal for Test Case 1: ";
    for (int val : result1)
        cout << val << " ";
    cout << endl;

    // Create example tree for test case 2
    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(5);
    root2->right->right = new TreeNode(8);
    root2->left->right->left = new TreeNode(6);
    root2->left->right->right = new TreeNode(7);
    root2->right->right->right = new TreeNode(9);

    vector<int> result2 = sol.preorderTraversal(root2);
    cout << "Preorder Traversal for Test Case 2: ";
    for (int val : result2)
        cout << val << " ";
    cout << endl;

    // Add more test cases as needed
    return 0;
}
