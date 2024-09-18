#include <iostream>
#include <vector>
using namespace std;

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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> result;
        inorder(root, result);
        return result;
    }

private:
    void inorder(TreeNode *node, vector<int> &result)
    {
        if (node == nullptr)
            return;
        inorder(node->left, result);
        result.push_back(node->val);
        inorder(node->right, result);
    }
};

// Test case
void test_recursive()
{
    Solution solution;

    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = solution.inorderTraversal(root);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl; // Expected output: 1 3 2
}

int main()
{
    test_recursive();
    return 0;
}
