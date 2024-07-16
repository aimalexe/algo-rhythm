#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return ""; // If the vector is empty, return an empty string immediately.

        int minLength = INT_MAX;
        // Determine the shortest string length in the array.
        for (const string &str : strs)
            minLength = min(minLength, static_cast<int>(str.length()));

        string commonPrefix = "";
        bool match = true;

        // Iterate character by character up to the length of the shortest string.
        for (int i = 0; i < minLength && match; i++)
        {
            char currentChar = strs[0][i]; // Take the current character from the first string.

            // Check if this character is present at the same position in all strings.
            for (int j = 1; j < strs.size(); j++)
                if (strs[j][i] != currentChar)
                {
                    match = false; // If a mismatch is found, stop further checking.
                    break;
                }

            if (match)
                commonPrefix += currentChar; // Append the matching character to the result.
        }

        return commonPrefix; // Return the longest common prefix found.
    }
};

int main()
{
    Solution sol;
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Longest Common Prefix: " << sol.longestCommonPrefix(strs2) << endl;

    return 0;
}
