class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        """
        Determines if a number is a perfect square using Newton's method.

        Args:
        num (int): The number to check.

        Returns:
        bool: True if num is a perfect square, False otherwise.
        """
        if num < 1:
            return False
        
        x = num
        while x * x > num:
            x = (x + num // x) // 2
        
        return x * x == num

s = Solution()

# Test case 1
print(s.isPerfectSquare(16))  # Output: True

# Test case 2
print(s.isPerfectSquare(14))  # Output: False
