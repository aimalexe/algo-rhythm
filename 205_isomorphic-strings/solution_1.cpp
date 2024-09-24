#include <iostream>
#include <unordered_map>
#include <string>
#include <cassert>

class Solution
{
public:
    /**
     * Determines if two strings are isomorphic.
     * @param s The first string.
     * @param t The second string.
     * @return True if the two strings are isomorphic, false otherwise.
     */
    bool isIsomorphic(std::string s, std::string t)
    {
        if (s.length() != t.length())
            return false;

        std::unordered_map<char, char> mapST, mapTS;

        for (int i = 0, stringLength = s.length(); i < stringLength; i++)
        {
            char ch1 = s[i], ch2 = t[i];

            if (mapST.find(ch1) != mapST.end() && mapST[ch1] != ch2)
                return false; // Inconsistent mapping in s -> t

            if (mapTS.find(ch2) != mapTS.end() && mapTS[ch2] != ch1)
                return false; // Inconsistent mapping in t -> s

            mapST[ch1] = ch2;
            mapTS[ch2] = ch1;
        }
        
        return true;
    }
};

void runTests()
{
    Solution sol;

    // Test cases
    assert(sol.isIsomorphic("egg", "add") == true);
    assert(sol.isIsomorphic("foo", "bar") == false);
    assert(sol.isIsomorphic("paper", "title") == true);
    assert(sol.isIsomorphic("abc", "def") == true);
    assert(sol.isIsomorphic("ab", "aa") == false);

    std::cout << "All test cases passed!" << std::endl;
}

int main()
{
    runTests();
    return 0;
}
