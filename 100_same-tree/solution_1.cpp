#include <iostream>
#include <stack>
using namespace std;

// Definition of TreeNode structure
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    /**
     * Iteratively checks if two binary trees are the same.
     * @param p: root of the first tree.
     * @param q: root of the second tree.
     * @return true if both trees are identical, false otherwise.
     */
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Stack to store pairs of nodes from both trees
        stack<pair<TreeNode*, TreeNode*>> st;
        st.push({p, q});
        
        while (!st.empty()) {
            auto [node1, node2] = st.top();
            st.pop();
            
            // If both nodes are null, continue to next pair
            if (!node1 && !node2) continue;
            
            // If only one of the nodes is null, or values differ, trees are not the same
            if (!node1 || !node2 || node1->val != node2->val) return false;
            
            // Push the left and right children for further comparison
            st.push({node1->right, node2->right});
            st.push({node1->left, node2->left});
        }
        
        // All nodes have been compared and found identical
        return true;
    }
};

// Helper function to create test cases
TreeNode* createTestTree1() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    return root;
}

TreeNode* createTestTree2() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    return root;
}

TreeNode* createTestTree3() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(1);
    return root;
}

// Test cases
void runTests() {
    Solution solution;
    
    TreeNode* p1 = createTestTree1();
    TreeNode* q1 = createTestTree2();
    TreeNode* p2 = createTestTree1();
    TreeNode* q2 = createTestTree3();
    
    // Test Case 1: Identical trees
    cout << "Test Case 1: " << (solution.isSameTree(p1, q1) == true ? "Passed ✅" : "Failed ❌") << endl; // Expected: true
    
    // Test Case 2: Different trees
    cout << "Test Case 2: " << (solution.isSameTree(p2, q2) == false ? "Passed ✅" : "Failed ❌") << endl; // Expected: false
}

int main() {
    runTests();
    return 0;
}
