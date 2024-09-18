#include <iostream>
#include <string>
using namespace std;

/**
 * Function to return the lastWordLength of the last word in the given string.
 * A word is defined as a substring consisting of non-space characters.
 * 
 * @param inputString - The input string consisting of words and spaces.
 * @return The lastWordLength of the last word in the string.
 */
class Solution {
public:
    int lengthOfLastWord(string inputString) {
        int sizeOfString = inputString.size();
        int lastWordLength = 0;
        char space = ' ';

        // Start from the end of the string and skip any trailing spaces
        int lastIndex = sizeOfString - 1;
        while (lastIndex >= 0 && inputString[lastIndex] == space) 
            lastIndex--;

        // Count the characters of the last word
        while (lastIndex >= 0 && inputString[lastIndex] != space) {
            lastWordLength++;
            lastIndex--;
        }

        return lastWordLength;
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    // Test cases from the prompt
    string testCases[] = {
        "Hello World",
        "   fly me   to   the moon  ",
        "luffy is still joyboy",
        "justOneWord",
        "trailing spaces     ",
        "    leading and trailing spaces    "
    };
    
    int expectedResults[] = {5, 4, 6, 11, 6, 6};

    for (int i = 0; i < 6; i++) {
        int result = solution.lengthOfLastWord(testCases[i]);
        cout << "Test Case " << i + 1 << ": " << (result == expectedResults[i] ? "Passed" : "Failed") << "\n";
        cout << "  Input: \"" << testCases[i] << "\"\n";
        cout << "  Expected: " << expectedResults[i] << ", Got: " << result << "\n\n";
    }
}

int main() {
    runTests();
    return 0;
}
