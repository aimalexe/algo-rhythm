from collections import Counter

class Solution:
    def is_anagram(self, s: str, t: str) -> bool:
        """
        Function to check if two strings are anagrams of each other.
        
        Parameters:
        s (str): First input string.
        t (str): Second input string.
        
        Returns:
        bool: True if t is an anagram of s, False otherwise.
        """
        # Anagrams must have the same length
        if len(s) != len(t):
            return False
        
        # Count the frequency of each character in both strings
        return Counter(s) == Counter(t)

# Test cases to validate the solution
s = Solution()
print("Test Case 1:", s.is_anagram("anagram", "nagaram"))  # Expected output: True
print("Test Case 2:", s.is_anagram("rat", "car"))          # Expected output: False
print("Test Case 3:", s.is_anagram("listen", "silent"))    # Expected output: True
print("Test Case 4:", s.is_anagram("hello", "world"))      # Expected output: False
