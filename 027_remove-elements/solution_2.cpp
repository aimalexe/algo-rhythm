#include <iostream>
#include <vector>
#include <chrono>

/**
 * Removes all occurrences of a specified value from the array in place.
 *
 * @param nums - The array of numbers.
 * @param val - The value to remove.
 * @return The number of elements in the array after removing the specified value.
 */
class Solution
{
public:
    int removeElement(std::vector<int> &nums, int val)
    {
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }

        return k;
    }
};

// Function to run and validate test cases
void runTests()
{
    Solution solution;

    // Test cases
    std::vector<std::tuple<std::vector<int>, int, int>> testCases = {
        {{3, 2, 2, 3}, 3, 2},
        {{0, 1, 2, 2, 3, 0, 4, 2}, 2, 5},
        {{}, 1, 0},
        {{2}, 3, 1},
    };

    for (size_t i = 0; i < testCases.size(); ++i)
    {
        auto input = std::get<0>(testCases[i]);
        int val = std::get<1>(testCases[i]);
        int expected = std::get<2>(testCases[i]);

        auto start = std::chrono::high_resolution_clock::now();
        int result = solution.removeElement(input, val);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;

        bool isSuccess = result == expected;

        std::cout << "Test Case " << i + 1 << ": " << (isSuccess ? "Passed" : "Failed") << "\n";
        std::cout << "  Input: [";
        for (size_t j = 0; j < input.size(); ++j)
        {
            if (j < result)
            {
                std::cout << input[j];
                if (j < result - 1)
                    std::cout << ", ";
            }
            else
            {
                std::cout << "_"; // Display underscores for remaining positions
                if (j < input.size() - 1)
                    std::cout << ", ";
            }
        }
        std::cout << "], Value to Remove: " << val << "\n";
        std::cout << "  Expected: " << expected << ", Got: " << result << "\n";
        std::cout << "  Execution Time: " << elapsed.count() << " ms\n\n";
    }
}

int main()
{
    runTests();
    return 0;
}
