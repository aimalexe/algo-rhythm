class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        """
        Determines if an integer n is a power of two using bit manipulation.

        Args:
        n (int): An integer to check.

        Returns:
        bool: True if n is a power of two, false otherwise.
        """
        return n > 0 and (n & (n - 1)) == 0

# Test cases
if __name__ == "__main__":
    s = Solution()
    print(s.isPowerOfTwo(1))  # Expected output: True
    print(s.isPowerOfTwo(16)) # Expected output: True
    print(s.isPowerOfTwo(3))  # Expected output: False
