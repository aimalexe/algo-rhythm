#include <iostream>
#include <vector>

class Solution
{
public:
    /**
     * Function to find the missing number in a given array using the mathematical approach.
     * @param nums: A vector of integers containing n distinct numbers in the range [0, n].
     * @return The missing number in the range.
     */
    int missingNumber(const std::vector<int> &nums)
    {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int num : nums)
            actualSum += num;

        return expectedSum - actualSum;
    }
};

// Test cases for C++ solution
void runTests()
{
    std::vector<std::vector<int>> testCases = {
        {3, 0, 1},
        {0, 1},
        {9, 6, 4, 2, 3, 5, 7, 0, 1},
        {9, 6, 4, 10, 2, 3, 5, 7, 0, 1, 8, 15, 13, 14, 12},
    };
    std::vector<int> expectedResults = {2, 2, 8, 11};
    Solution s;

    for (size_t i = 0; i < testCases.size(); ++i)
    {
        int result = s.missingNumber(testCases[i]);
        std::cout << "Test Case " << i + 1 << ": ";
        if (result == expectedResults[i])
            std::cout << "Passed\n";
        else
            std::cout << "Failed (Expected " << expectedResults[i] << ", Got " << result << ")\n";
    }
}

int main()
{
    runTests();
    return 0;
}
