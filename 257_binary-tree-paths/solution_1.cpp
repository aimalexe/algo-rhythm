#include <iostream>
#include <vector>
#include <string>

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
     * Helper function to perform DFS and find all root-to-leaf paths.
     * @param node: Current node in the binary tree.
     * @param path: Current path from root to the node.
     * @param paths: Vector to store all root-to-leaf paths.
     */
    void dfs(TreeNode *node, string path, vector<string> &paths)
    {
        if (!node)
            return; // Base case: if the node is null, return.

        // Append the current node's value to the path
        path += to_string(node->val);

        // If it's a leaf node, add the path to the list of paths
        if (!node->left && !node->right)
            paths.push_back(path);
        else
        {
            // Continue the DFS on left and right child
            path += "->"; // Add the separator for the path
            dfs(node->left, path, paths);
            dfs(node->right, path, paths);
        }
    }

public:
    /**
     * Main function to return all root-to-leaf paths in the binary tree.
     * @param root: Root of the binary tree.
     * @return: Vector of strings representing all root-to-leaf paths.
     */
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> paths; // Vector to store all paths
        dfs(root, "", paths); // Start DFS from root
        return paths;
    }
};

int main()
{
    Solution s;
    // Construct a binary tree for testing
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    // Get all root-to-leaf paths
    vector<string> paths = s.binaryTreePaths(root);

    // Print the paths
    cout << "Root-to-Leaf Paths:" << endl;
    for (const string &path : paths)
        cout << path << endl; // Output each path

    return 0;
}
