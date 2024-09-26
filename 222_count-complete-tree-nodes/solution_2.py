# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def countNodes(self, root):
        """
        Counts the number of nodes in a binary tree using DFS (Depth-First Search).
        
        :param root: The root node of the binary tree.
        :return: The total number of nodes in the tree.
        """
        if not root:
            return 0
        
        # Recursive DFS: 1 (current node) + left subtree + right subtree
        return 1 + self.countNodes(root.left) + self.countNodes(root.right)

# Test case
if __name__ == "__main__":
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)
    root.right.left = TreeNode(6)

    s = Solution()

    print("Total nodes in the tree:", s.countNodes(root))
