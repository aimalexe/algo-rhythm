#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    /**
     * @brief Function to generate the first numRows of Pascal's Triangle.
     *
     * @param numRows The number of rows to generate.
     * @return vector<vector<int>> The Pascal's Triangle up to numRows.
     */
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle(numRows);

        for (int i = 0; i < numRows; i++)
        {
            triangle[i].resize(i + 1);
            triangle[i][0] = triangle[i][i] = 1; // First and last elements are 1

            // Fill in the values inside the row
            for (int j = 1; j < i; j++)
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        return triangle;
    }
};

int main()
{
    Solution sol;
    int numRows = 10;
    vector<vector<int>> result = sol.generate(numRows);

    // Display Pascal's Triangle
    for (const auto &row : result)
    {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
