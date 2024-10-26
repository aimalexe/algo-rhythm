class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        """
        Determines if the given number is a power of four using the iteration method
                
        :param n: The integer to check.
        :return: True if n is a power of four, False otherwise.
        """
        if (n < 1):
            return False

        while n % 4 == 0:
            n //=4

        return n == 1
        # return n > 0 and 1073741824 % n == 0

# Test cases
s = Solution()
print(s.isPowerOfFour(16))  # Output: True
print(s.isPowerOfFour(5))   # Output: False
print(s.isPowerOfFour(1))   # Output: True
print(s.isPowerOfFour(8))   # Output: True
