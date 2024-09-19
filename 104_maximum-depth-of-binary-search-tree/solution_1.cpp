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
public:
    /**
     * @brief Function to compute the maximum depth of a binary tree recursively.
     * @param root: Pointer to the root node of the binary tree.
     * @return The maximum depth of the tree.
     */
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0; // Base case: empty tree has depth 0.
        // Recursively calculate the depth of left and right subtrees, and return the maximum + 1.
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

// Helper function to run test cases
void runTest(TreeNode *root, int expected)
{
    Solution sol;
    int result = sol.maxDepth(root);
    cout << "Max Depth: " << result << " | Expected: " << expected << endl;
}

// Test cases
int main()
{
    // Example 1: Tree [3,9,20,null,null,15,7]
    TreeNode *root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);
    runTest(root1, 3);

    // Example 2: Tree [1,null,2]
    TreeNode *root2 = new TreeNode(1);
    root2->right = new TreeNode(2);
    runTest(root2, 2);

    return 0;
}
