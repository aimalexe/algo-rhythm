class Solution {
/**
 * Expands around the center of the string to find the longest palindromic substring.
 * @param s The input string.
 * @param left The left index of the current center.
 * @param right The right index of the current center.
 * @return The length of the longest palindromic substring from the center.
 */
  int expandAroundCenter(String s, int left, int right) {
    while (left >= 0 && right < s.length && s[left] == s[right]) {
      left--;
      right++;
    }
    return right - left - 1;
  }

/**
 * Finds the longest palindromic substring in the given string.
 * @param s The input string.
 * @return The longest palindromic substring.
 */
  String longestPalindrome(String s) {
    if (s.isEmpty) return "";

    int start = 0, end = 0;

    for (int i = 0; i < s.length; i++) {
      // Consider odd length palindrome
      int len1 = expandAroundCenter(s, i, i);
      // Consider even length palindrome
      int len2 = expandAroundCenter(s, i, i + 1);

      // Get the longer palindrome
      int len = len1 > len2 ? len1 : len2;

      // Update the start and end pointers if a longer palindrome is found
      if (len > end - start) {
        start = i - (len - 1) ~/ 2;
        end = i + len ~/ 2;
      }
    }

    return s.substring(start, end + 1);
  }
}

// Test cases
void main() {
  String s1 = "babad";
  String s2 = "cbbd";

  Solution sol = Solution();

  print("Longest Palindrome of $s1: ${sol.longestPalindrome(s1)}");
  print("Longest Palindrome of $s2: ${sol.longestPalindrome(s2)}");
}
