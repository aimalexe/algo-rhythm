class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        """
        Determine if the given integer n is a power of three.

        We use the largest power of 3 that can fit into a signed 32-bit integer (3^19 = 1162261467).
        If n is a power of three, it will divide 1162261467 with no remainder.

        Parameters:
        n (int): The integer to check.

        Returns:
        bool: True if n is a power of three, False otherwise.
        """
        # 1162261467 is 3^19, the largest power of 3 within the signed 32-bit integer range.
        return n > 0 and 1162261467 % n == 0

# Test cases
s = Solution()
print(s.isPowerOfThree(27))  # Output: True
print(s.isPowerOfThree(0))   # Output: False
print(s.isPowerOfThree(-1))  # Output: False
print(s.isPowerOfThree(9))   # Output: True
