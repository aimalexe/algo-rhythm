class Solution:
    def addDigits(self, num: int) -> int:
        """
        Function to compute the digital root of an integer.
        
        Parameters:
        num (int): The input integer.
        
        Returns:
        int: The resulting single digit.
        """
        if num == 0:
            return 0  # Special case for 0
        return 1 + (num - 1) % 9  # Using the digital root formula

s = Solution()
# Test cases to validate the solution
print("Input: 38, Output:", s.addDigits(38))  # Expected output: 2
print("Input: 0, Output:", s.addDigits(0))    # Expected output: 0
print("Input: 99, Output:", s.addDigits(99))   # Expected output: 9
print("Input: 12345, Output:", s.addDigits(12345))  # Expected output: 6
