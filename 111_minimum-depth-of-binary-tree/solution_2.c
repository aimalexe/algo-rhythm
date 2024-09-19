#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new TreeNode.
struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/**
 * @brief Function to compute the minimum depth of a binary tree.
 * 
 * @param root Pointer to the root of the binary tree.
 * @return int The minimum depth from root to the nearest leaf node.
 */
int minDepth(struct TreeNode* root) {
    if (!root)
        return 0; // If tree is empty, depth is 0

    // If either subtree is null, recurse into the non-null subtree
    if (!root->left) 
        return minDepth(root->right) + 1;
    if (!root->right)
        return minDepth(root->left) + 1;

    // Otherwise, take the minimum depth of the two subtrees
    int leftDepth = minDepth(root->left);
    int rightDepth = minDepth(root->right);
    return (leftDepth < rightDepth ? leftDepth : rightDepth) + 1;
}

int main() {
    // Example 1
    struct TreeNode* root1 = newNode(3);
    root1->left = newNode(9);
    root1->right = newNode(20);
    root1->right->left = newNode(15);
    root1->right->right = newNode(7);

    printf("Minimum depth of tree 1: %d\n", minDepth(root1));

    // Example 2
    struct TreeNode* root2 = newNode(2);
    root2->right = newNode(3);
    root2->right->right = newNode(4);
    root2->right->right->right = newNode(5);
    root2->right->right->right->right = newNode(6);

    printf("Minimum depth of tree 2: %d\n", minDepth(root2));

    return 0;
}
