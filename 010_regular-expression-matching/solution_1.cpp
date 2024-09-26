#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    /**
     * Implements regular expression matching using dynamic programming.
     * @param s The input string.
     * @param p The pattern string.
     * @return True if the input string matches the pattern, otherwise false.
     */
    bool isMatch(std::string s, std::string p)
    {
        int m = s.length(), n = p.length();
        std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));

        // Base case: empty string and empty pattern match
        dp[0][0] = true;

        // Handle patterns with '*' where they can match empty strings
        for (int j = 1; j <= n; j++)
            if (p[j - 1] == '*')
                dp[0][j] = dp[0][j - 2];

        // Fill the dp table
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.')
                    dp[i][j] = dp[i - 1][j - 1]; // Regular character or '.'
                else if (p[j - 1] == '*')
                {
                    dp[i][j] = dp[i][j - 2]; // '*' matches zero occurrence
                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.')
                        dp[i][j] = dp[i][j] || dp[i - 1][j]; // '*' matches one or more occurrences
                }

        return dp[m][n];
    }
};

// Test cases
int main()
{
    Solution sol;

    std::cout << std::boolalpha;
    std::cout << "Test Case 1: " << sol.isMatch("aa", "a") << std::endl;                   // Output: false
    std::cout << "Test Case 2: " << sol.isMatch("aa", "a*") << std::endl;                  // Output: true
    std::cout << "Test Case 3: " << sol.isMatch("ab", ".*") << std::endl;                  // Output: true
    std::cout << "Test Case 4: " << sol.isMatch("aab", "c*a*b") << std::endl;              // Output: true
    std::cout << "Test Case 5: " << sol.isMatch("mississippi", "mis*is*p*.") << std::endl; // Output: false
}
