#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    /**
     * Converts a string into a zigzag pattern given the number of rows and returns the result
     * as a concatenated string.
     * @param s The input string.
     * @param numRows The number of rows for the zigzag pattern.
     * @return The zigzag converted string.
     */
    std::string convert(const std::string s, const int numRows)
    {
        if (numRows == 1)
            return s; // Edge case where no zigzag pattern is required

        std::vector<std::string> rows(std::min(numRows, int(s.size())));
        int currentRow = 0,
            firstRow = 0,
            lastRow = numRows - 1;
        bool goingDown = false;

        // Build the zigzag pattern row by row
        for (char c : s)
        {
            rows[currentRow] += c;
            if (currentRow == firstRow || currentRow == lastRow)
                goingDown = !goingDown; // Change direction at the top and bottom row
            currentRow += goingDown ? 1 : -1;
        }

        // Concatenate all rows
        std::string result;
        for (std::string row : rows)
            result += row;

        return result;
    }
};

// Test cases
int main()
{
    Solution sol;

    std::string s1 = "PAYPALISHIRING";
    int numRows1 = 3;
    std::cout << "Zigzag Conversion: " << sol.convert(s1, numRows1) << std::endl; // Output: PAHNAPLSIIGYIR

    std::string s2 = "PAYPALISHIRING";
    int numRows2 = 4;
    std::cout << "Zigzag Conversion: " << sol.convert(s2, numRows2) << std::endl; // Output: PINALSIGYAHRPI

    std::string s3 = "A";
    int numRows3 = 1;
    std::cout << "Zigzag Conversion: " << sol.convert(s3, numRows3) << std::endl; // Output: A
}
