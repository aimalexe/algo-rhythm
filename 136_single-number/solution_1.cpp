#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    /**
     * Function to find the single number using XOR bit manipulation.
     * @param nums: The input vector of integers where every element appears twice except one.
     * @return The single number.
     */
    int singleNumber(const vector<int> &nums)
    {
        int result = 0;

        for (int num : nums)
            result ^= num; // XOR all numbers

        return result;
    }
};

void runTests()
{
    vector<vector<int>> testCases = {
        {2, 2, 1},       // Expected: 1
        {4, 1, 2, 1, 2}, // Expected: 4
        {1},             // Expected: 1
        {5, 5, 6},       // Expected: 6
        {9, 3, 9, 3, 8}, // Expected: 8
    };
    Solution sol;
    for (int i = 0; i < testCases.size(); ++i)
        cout << "Test Case " << i + 1 << ": Single Number = " << sol.singleNumber(testCases[i]) << endl;
}

int main()
{
    runTests();
    return 0;
}
