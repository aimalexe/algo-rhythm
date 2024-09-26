#include <iostream>
#include <climits>
#include <string>
#include <vector>

class Solution
{
public:
    /**
     * Converts a string to a 32-bit signed integer (similar to the atoi function).
     * @param s The input string to convert.
     * @return The converted integer, or 0 if the string is not a valid representation of an integer.
     */
    int myAtoi(std::string s)
    {
        int i = 0, n = s.length();
        int sign = 1; // Default to positive
        long result = 0;

        // Step 1: Ignore leading whitespace
        while (i < n && s[i] == ' ')
            i++;

        // Step 2: Handle the optional sign
        if (i < n && (s[i] == '-' || s[i] == '+'))
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert the digits to integer
        while (i < n && std::isdigit(s[i]))
        {
            result = result * 10 + (s[i] - '0');

            // Step 4: Handle overflow and underflow
            if (sign == 1 && result > INT_MAX)
                return INT_MAX;
            if (sign == -1 && -result < INT_MIN)
                return INT_MIN;
            i++;
        }

        return sign * result;
    }
};

// Test cases
void testAtoi()
{
    std::vector<std::string> testCases = {
        "42", "   -42", "4193 with words", "words and 987", "-91283472332"};
    std::vector<int> expected = {42, -42, 4193, 0, -1089159116};
    Solution sol;

    for (int i = 0; i < testCases.size(); i++)
    {
        int result = sol.myAtoi(testCases[i]);
        std::cout << "Test Case " << i + 1 << ": " << (result == expected[i] ? "Passed ✅" : "Failed ❌") << std::endl;
        std::cout << "  Input: " << testCases[i] << std::endl;
        std::cout << "  Expected: " << expected[i] << ", Got: " << result << std::endl;
    }
}

int main()
{
    testAtoi();
    return 0;
}
