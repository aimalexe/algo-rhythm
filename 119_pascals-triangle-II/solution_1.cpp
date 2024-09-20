#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    /**
     * Function to return the specific row of Pascal's triangle.
     * @param rowIndex: The 0-indexed row to return.
     * @return A vector representing the rowIndex-th row of Pascal's triangle.
     */
    vector<int> getRow(int rowIndex)
    {
        vector<int> row(rowIndex + 1, 1); // Initialize row with all 1s

        // Update values in place, iterate rowIndex times.
        for (int i = 1; i < rowIndex; ++i)
            for (int j = i; j > 0; --j)
                row[j] += row[j - 1]; // Update current value

        return row;
    }
};

void runTests()
{
    Solution sol;
    vector<pair<int, vector<int>>> testCases = {
        {0, {1}},
        {1, {1, 1}},
        {3, {1, 3, 3, 1}},
        {4, {1, 4, 6, 4, 1}},
        {5, {1, 5, 10, 10, 5, 1}}};

    for (int i = 0; i < testCases.size(); ++i)
    {
        int input = testCases[i].first;
        vector<int> expected = testCases[i].second;
        vector<int> result = sol.getRow(input);

        cout << "Test Case " << i + 1 << ": " << (result == expected ? "Passed ✅" : "Failed ❌") << endl;
        cout << "  Input: " << input << endl;
        cout << "  Expected: ";
        for (int num : expected)
            cout << num << " ";
        cout << "\n  Got: ";
        for (int num : result)
            cout << num << " ";
        cout << endl;
    }
}

int main()
{
    runTests();
    return 0;
}
