#include <iostream>
#include <vector>
using namespace std;

/**
 * Function to increment the large integer represented as an array of digits by 1.
 *
 * @param digitSequence - A vector of integers where each element represents a digit.
 * @return A vector of integers representing the large integer after adding 1.
 */
class Solution
{
public:
    vector<int> plusOne(vector<int> digitSequence)
    {
        int numDigits = digitSequence.size();

        // Traverse the digitSequence from the last to the first
        for (int index = numDigits - 1; index >= 0; index--)
        {
            if (digitSequence[index] < 9)
            {
                // If the current digit is less than 9, just increment it
                digitSequence[index]++;
                return digitSequence;
            }
            // If the current digit is 9, set it to 0 and continue
            digitSequence[index] = 0;
        }

        // If all digitSequence were 9, add an extra 1 at the beginning
        digitSequence.insert(digitSequence.begin(), 1);
        return digitSequence;
    }
};

// Function to run and validate test cases
void runTests()
{
    Solution solution;

    // Test cases from the prompt
    vector<vector<int>> testCases = {
        {1, 2, 3},    // Test case 1
        {4, 3, 2, 1}, // Test case 2
        {9},          // Test case 3
        {9, 9, 9},
        {7, 5, 6, 8}};

    vector<vector<int>> expected = {
        {1, 2, 4},    // Expected result for test case 1
        {4, 3, 2, 2}, // Expected result for test case 2
        {1, 0},       // Expected result for test case 3
        {1, 0, 0, 0},
        {7, 5, 6, 9}};

    for (size_t i = 0; i < testCases.size(); ++i)
    {
        vector<int> result = solution.plusOne(testCases[i]);
        cout << "Test Case " << i + 1 << ": " << (result == expected[i] ? "Passed" : "Failed") << "\n";
        cout << "  Input: [";
        for (size_t j = 0; j < testCases[i].size(); ++j)
        {
            cout << testCases[i][j];
            if (j < testCases[i].size() - 1)
                cout << ", ";
        }
        cout << "]\n";
        cout << "  Expected: [";
        for (size_t j = 0; j < expected[i].size(); ++j)
        {
            cout << expected[i][j];
            if (j < expected[i].size() - 1)
                cout << ", ";
        }
        cout << "], Got: [";
        for (size_t j = 0; j < result.size(); ++j)
        {
            cout << result[j];
            if (j < result.size() - 1)
                cout << ", ";
        }
        cout << "]\n\n";
    }
}

int main()
{
    runTests();
    return 0;
}
