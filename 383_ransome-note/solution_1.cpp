#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    /**
     * Checks if ransomNote can be constructed from the characters in magazine.
     * @param ransomNote - the string representing the ransom note
     * @param magazine - the string representing the magazine
     * @return true if ransomNote can be constructed, false otherwise
     */
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> freqMap;

        // Populate the frequency map with characters from magazine
        for (char c : magazine)
            freqMap[c]++;

        // Check if ransomNote can be formed
        for (char c : ransomNote)
        {
            if (freqMap[c] == 0)
                return false;
            freqMap[c]--; // Use the character from the magazine
        }

        return true;
    }
};

int main()
{
    Solution s;
    // Test cases
    cout << s.canConstruct("a", "b") << endl;    // Output: 0 (false)
    cout << s.canConstruct("aa", "ab") << endl;  // Output: 0 (false)
    cout << s.canConstruct("aa", "aab") << endl; // Output: 1 (true)
}
