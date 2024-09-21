#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    /**
     * Function to convert an Excel column title to its corresponding column number.
     * @param columnTitle: string representing the Excel column title.
     * @return the corresponding column number.
     */
    int titleToNumber(string columnTitle)
    {
        int columnNumber = 0;
        int numAlphabets = 26;
        char firstAlphabet = 'A' - 1; // Convert the character to its 1-based index.
        for (char currentChar : columnTitle)
            columnNumber = columnNumber * numAlphabets + (currentChar - firstAlphabet);
        return columnNumber;
    }
};

// Test cases
int main()
{
    Solution sol;
    cout << "Column Number of 'A': " << sol.titleToNumber("A") << endl;     // Output: 1
    cout << "Column Number of 'AB': " << sol.titleToNumber("AB") << endl;   // Output: 28
    cout << "Column Number of 'ZY': " << sol.titleToNumber("ZY") << endl;   // Output: 701
    cout << "Column Number of 'EXE': " << sol.titleToNumber("EXE") << endl; // Output: 4009
    return 0;
}
