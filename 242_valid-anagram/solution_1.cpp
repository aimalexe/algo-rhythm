#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Solution
{
public:
    /**
     * Function to check if two strings are anagrams of each other.
     * @param s: First input string.
     * @param t: Second input string.
     * @return: true if t is an anagram of s, false otherwise.
     */
    bool isAnagram(string s, string t)
    {
        // If the lengths of the strings are different, they cannot be anagrams
        if (s.length() != t.length())
            return false;

        // Create a frequency array for the characters
        vector<int> charCount(26, 0); // For lowercase English letters

        // Count the frequency of each character in both strings
        for (char c : s)
            charCount[c - 'a']++; // Increment the count for the character in s

        for (char c : t)
        {
            charCount[c - 'a']--; // Decrement the count for the character in t
            // If count goes below zero, t has an extra character not in s
            if (charCount[c - 'a'] < 0)
                return false;
        }

        return true; // If we get here, t is an anagram of s
    }
};

int main()
{
    Solution s;
    // Test cases to validate the solution
    cout << "Test Case 1: " << (s.isAnagram("anagram", "nagaram") ? "Passed" : "Failed") << endl; // true
    cout << "Test Case 2: " << (!s.isAnagram("rat", "car") ? "Passed" : "Failed") << endl;        // false
    cout << "Test Case 3: " << (s.isAnagram("listen", "silent") ? "Passed" : "Failed") << endl;   // true
    cout << "Test Case 4: " << (!s.isAnagram("hello", "world") ? "Passed" : "Failed") << endl;    // false

    return 0;
}
