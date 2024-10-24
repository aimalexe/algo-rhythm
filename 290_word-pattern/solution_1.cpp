#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>

class Solution
{
public:
    /**
     * Function to check if a string s follows a given pattern.
     * @param pattern: A string pattern containing only lowercase letters.
     * @param s: A string containing words separated by spaces.
     * @return True if s follows the pattern, otherwise False.
     */
    bool wordPattern(std::string pattern, std::string s)
    {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;

        std::istringstream ss(s);
        std::vector<std::string> words;
        std::string word;
        int patternLength = pattern.size();

        // Split the string into words
        while (ss >> word)
            words.push_back(word);

        // If pattern length and number of words don't match, return false
        if (patternLength != words.size())
            return false;

        for (int i = 0; i < patternLength; ++i)
        {
            char c = pattern[i];
            std::string w = words[i];

            // Check if mapping exists and is consistent
            if (charToWord.count(c))
            {
                if (charToWord[c] != w)
                    return false;
            }
            else
                charToWord[c] = w;

            // Check reverse mapping
            if (wordToChar.count(w))
            {
                if (wordToChar[w] != c)
                    return false;
            }
            else
                wordToChar[w] = c;
        }

        return true;
    }
};

// Test cases for C++ solution
int main()
{
    Solution s;
    std::cout << s.wordPattern("abba", "dog cat cat dog") << std::endl;  // True
    std::cout << s.wordPattern("abca", "dog cat fish dog") << std::endl;  // True
    std::cout << s.wordPattern("abba", "dog cat cat fish") << std::endl; // False
    std::cout << s.wordPattern("aaaa", "dog cat cat dog") << std::endl;  // False
    return 0;
}
