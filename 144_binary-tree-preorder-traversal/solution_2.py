from typing import List, Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def preorderTraversal(self, root:Optional[TreeNode]) -> List[int]:
        """
        Perform an iterative preorder traversal of the binary tree
        :param root: TreeNode - root of the binary tree
        :return: List[int] - preorder traversal of the tree nodes
        """
        if not root:
            return []
        
        result = []
        stack = [root]
        
        while stack:
            node = stack.pop()
            result.append(node.val)  # Visit the node

            if node.right:
                stack.append(node.right)  # Push right child to stack
            if node.left:
                stack.append(node.left)  # Push left child to stack
        
        return result

# Test cases to validate the solution
def test_preorder_traversal():
    testCases = [
        {"input": TreeNode(1, None, TreeNode(2, TreeNode(3), None)), "expected": [1, 2, 3]},
        {"input": TreeNode(1, TreeNode(2, TreeNode(4), TreeNode(5, TreeNode(6), TreeNode(7))), TreeNode(3, None, TreeNode(8, None, TreeNode(9)))), "expected": [1, 2, 4, 5, 6, 7, 3, 8, 9]},
        {"input": None, "expected": []},
        {"input": TreeNode(1), "expected": [1]},
        {"input": TreeNode(1, TreeNode(2), TreeNode(3)), "expected": [1, 2, 3]},
    ]
    sol = Solution()

    for index, case in enumerate(testCases):
        result = sol.preorderTraversal(case['input'])
        assert result == case['expected'], f"Test case {index + 1} failed: expected {case['expected']}, got {result}"
        print(f"Test case {index + 1}: Passed")

# Run test cases
test_preorder_traversal()
