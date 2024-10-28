from collections import Counter

class Solution:
    def firstUniqChar(self, s: str) -> int:
        # Count the frequency of each character using Counter
        freq = Counter(s)
        
        # Find the first character with a frequency of 1
        for i, c in enumerate(s):
            if freq[c] == 1:
                return i
        
        return -1  # If no unique character exists

s =Solution()
# Test cases
print(s.firstUniqChar("leetcode"))        # Output: 0
print(s.firstUniqChar("loveleetcode"))    # Output: 2
print(s.firstUniqChar("aabb"))            # Output: -1
