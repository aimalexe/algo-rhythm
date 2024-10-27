class Solution:
    def reverseVowels(self, s: str) -> str:
        """
        Reverses the vowels in the input string.

        This function modifies the string such that only the vowels ('a', 'e', 'i', 'o', 'u')
        are reversed, while the other characters remain in the same position. The function 
        uses a two-pointer approach to efficiently reverse the vowels in-place.

        Args:
        s (str): Input string consisting of printable ASCII characters.

        Returns:
        str: The modified string with reversed vowels.
        """
        vowels = set("aeiouAEIOU")  # Set of vowels (both lower and upper case)
        s = list(s)  # Convert the string to a list for easier in-place modification
        i, j = 0, len(s) - 1  # Two pointers: one at the beginning, one at the end

        while i < j:
            # Move i forward if the character is not a vowel
            if s[i] not in vowels:
                i += 1
            # Move j backward if the character is not a vowel
            elif s[j] not in vowels:
                j -= 1
            # If both s[i] and s[j] are vowels, swap them and move both pointers
            else:
                s[i], s[j] = s[j], s[i]
                i += 1
                j -= 1

        return ''.join(s)  # Convert the list back to a string

# Test cases
s = Solution()
print(s.reverseVowels("IceCreAm"))  # Output: AceCreIm
print(s.reverseVowels("leetcode"))  # Output: leotcede
