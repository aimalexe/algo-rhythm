class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        # Base case for recursion: when the columnTitle is empty
        if not columnTitle:
            return 0
        # Recursive calculation for the last character
        return self.titleToNumber(columnTitle[:-1]) * 26 + (ord(columnTitle[-1]) - ord('A') + 1)

# Test cases

sol = Solution()
print("Column Number of 'A':", sol.titleToNumber("A"))   # Output: 1
print("Column Number of 'AB':", sol.titleToNumber("AB")) # Output: 28
print("Column Number of 'ZY':", sol.titleToNumber("ZY")) # Output: 701
print("Column Number of 'EXE':", sol.titleToNumber("EXE")) # Output: 4009
