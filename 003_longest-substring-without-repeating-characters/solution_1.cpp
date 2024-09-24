#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    /**
     * Function to find the length of the longest substring without repeating characters.
     * @param s - Input string.
     * @return Length of the longest substring.
     */
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> charIndexMap; // Stores the last index of characters.
        int maxLength = 0;                     // To store the maximum length of substring without repeats.
        int start = 0;                         // Left pointer of the sliding window.

        // Traverse through the string
        for (int end = 0; end < s.size(); ++end)
        {
            char currentChar = s[end];

            // If character is already in the map and is within the current window, move the start pointer.
            if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start)
                start = charIndexMap[currentChar] + 1;

            // Update the current character's index.
            charIndexMap[currentChar] = end;

            // Calculate the maximum length.
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};

/**
 * Test cases for C++ solution.
 */
void runTests()
{
    struct TestCase
    {
        string input;
        int expected;
    };

    vector<TestCase> testCases = {
        {"abcabcbb", 3},
        {"bbbbb", 1},
        {"pwwkew", 3},
        {"", 0},
        {"abcdef", 6}};
    Solution sol;

    for (size_t i = 0; i < testCases.size(); ++i)
    {
        const auto &test = testCases[i];
        int result = sol.lengthOfLongestSubstring(test.input);
        bool isSuccess = result == test.expected;

        cout << "Test Case " << i + 1 << ": " << (isSuccess ? "Passed ✅" : "Failed ❌") << endl;
        cout << "  Input: \"" << test.input << "\"" << endl;
        cout << "  Expected: " << test.expected << ", Got: " << result << endl
             << endl;
    }
}

int main()
{
    runTests();
    return 0;
}
