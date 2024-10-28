#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    /**
     * Finds the index of the first non-repeating character in a string.
     * @param s - the input string consisting of lowercase English letters
     * @return the index of the first unique character, or -1 if none exists
     */
    int firstUniqChar(string s)
    {
        vector<int> freq(26, 0); // Array to store frequencies of 26 lowercase letters

        // Count the frequency of each character
        for (char c : s)
            freq[c - 'a']++;

        // Find the first character with a frequency of 1
        for (int i = 0; i < s.length(); i++)
            if (freq[s[i] - 'a'] == 1)
                return i;

        return -1; // If no unique character is found
    }
};

int main()
{
    Solution s;
    // Test cases
    cout << s.firstUniqChar("leetcode") << endl;     // Output: 0
    cout << s.firstUniqChar("loveleetcode") << endl; // Output: 2
    cout << s.firstUniqChar("aabb") << endl;         // Output: -1
}
