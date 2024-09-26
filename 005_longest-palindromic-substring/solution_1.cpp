#include <iostream>
#include <string>

class Solution
{
private:
    /**
     * Helper function to expand around the center and check for the longest palindromic substring.
     * @param s The input string.
     * @param left The left index of the current center.
     * @param right The right index of the current center.
     * @return The length of the longest palindromic substring found from the center.
     */
    int expandAroundCenter(const std::string &s, int left, int right)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        return right - left - 1;
    }

public:
    /**
     * Finds the longest palindromic substring in a given string.
     * @param s The input string.
     * @return The longest palindromic substring.
     */
    std::string longestPalindrome(std::string s)
    {
        if (s.empty())
            return "";

        int start = 0, end = 0;

        for (int i = 0; i < s.size(); i++)
        {
            // Consider odd length palindrome
            int len1 = expandAroundCenter(s, i, i);
            // Consider even length palindrome
            int len2 = expandAroundCenter(s, i, i + 1);

            // Get the longer palindrome
            int len = std::max(len1, len2);

            // Update the start and end pointers if a longer palindrome is found
            if (len > end - start)
            {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }
};

// Test cases
int main()
{
    std::string s1 = "babad";
    std::string s2 = "cbbd";
    std::string s3 = "pkalakplkaklpkd";
    std::string s4 = "";
    std::string s5 = "abcdefghij";

    Solution sol;

    std::cout << "Longest Palindrome of '" << s1 << "' is: " << sol.longestPalindrome(s1) << std::endl;
    std::cout << "Longest Palindrome of '" << s2 << "' is: " << sol.longestPalindrome(s2) << std::endl;
    std::cout << "Longest Palindrome of '" << s3 << "' is: " << sol.longestPalindrome(s3) << std::endl;
    std::cout << "Longest Palindrome of '" << s4 << "' is: " << sol.longestPalindrome(s4) << std::endl;
    std::cout << "Longest Palindrome of '" << s5 << "' is: " << sol.longestPalindrome(s5) << std::endl;

    return 0;
}
