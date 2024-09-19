from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class Solution:
    # Function to check if the tree is symmetric.
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True  # An empty tree is symmetric
        
        # Initialize a queue for level-order traversal
        queue = deque([(root.left, root.right)])
        
        while queue:
            left, right = queue.popleft()
            
            # If both are None, continue to next pair
            if not left and not right:
                continue
            
            # If one is None or the values don't match, it's not symmetric
            if not left or not right or left.val != right.val:
                return False
            
            # Add children in mirrored order
            queue.append((left.left, right.right))
            queue.append((left.right, right.left))
        
        return True

# Helper function to build the tree (example)
def runTest(root, expected):
    sol = Solution()
    result = sol.isSymmetric(root)
    print(f"Symmetric: {result}, Expected: {expected}")

# Test cases
if __name__ == "__main__":
    # Example 1
    root1 = TreeNode(1)
    root1.left = TreeNode(2)
    root1.right = TreeNode(2)
    root1.left.left = TreeNode(3)
    root1.left.right = TreeNode(4)
    root1.right.left = TreeNode(4)
    root1.right.right = TreeNode(3)
    runTest(root1, True)

    # Example 2
    root2 = TreeNode(1)
    root2.left = TreeNode(2)
    root2.right = TreeNode(2)
    root2.left.right = TreeNode(3)
    root2.right.right = TreeNode(3)
    runTest(root2, False)
    
    # Additional test cases can be added as needed
