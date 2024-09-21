#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    /**
     * Function to convert column number to Excel column title.
     * @param columnNumber: the integer to be converted.
     * @return a string representing the Excel column title.
     */
    string convertToTitle(int columnNumber)
    {
        string columnTitle = "";
        int remainder;
        int numAlphabets = 26;

        while (columnNumber > 0)
        {
            columnNumber--; // Shift to 0-indexed
            remainder = columnNumber % numAlphabets;
            columnTitle = char('A' + remainder) + columnTitle;
            columnNumber /= 26;
        }
        return columnTitle;
    }
};

// Test cases
int main()
{
    Solution sol;

    cout << "Test Case 1: " << sol.convertToTitle(1) << endl;   // Output: "A"
    cout << "Test Case 2: " << sol.convertToTitle(28) << endl;  // Output: "AB"
    cout << "Test Case 3: " << sol.convertToTitle(701) << endl; // Output: "ZY"
    cout << "Test Case 4: " << sol.convertToTitle(60) << endl; // Output: "BH"
    cout << "Test Case 5: " << sol.convertToTitle(4009) << endl; // Output: "EXE"
    return 0;
}
