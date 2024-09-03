#include <iostream>
#include <vector>
#include <set>
#include <chrono>

/**
 * Removes duplicates from a sorted array in place and returns the number of unique elements.
 * 
 * @param nums - The sorted input array.
 * @return The number of unique elements in the array.
 */
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        std::set<int> uniqueElements(nums.begin(), nums.end());
        int uniqueCount = 0;

        for (const int& num : uniqueElements) {
            nums[uniqueCount++] = num;
        }

        return uniqueCount;
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    // Test cases
    std::vector<std::pair<std::vector<int>, int>> testCases = {
        { {1, 1, 2}, 2 },
        { {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}, 5 },
        { {}, 0 },
        { {-1}, 1 },
    };

    for (size_t i = 0; i < testCases.size(); ++i) {
        std::vector<int> input = testCases[i].first;
        int expected = testCases[i].second;

        auto start = std::chrono::high_resolution_clock::now();
        int result = solution.removeDuplicates(input);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;

        bool isSuccess = result == expected;

        std::cout << "Test Case " << i + 1 << ": " << (isSuccess ? "Passed" : "Failed") << "\n";
        std::cout << "  Input: [";
        for (size_t j = 0; j < input.size(); ++j) {
            if (j < result) {
                std::cout << input[j];
                if (j < result - 1) std::cout << ", ";
            } else {
                std::cout << "_";  // Display underscores for remaining positions
                if (j < input.size() - 1) std::cout << ", ";
            }
        }
        std::cout << "]\n";
        std::cout << "  Expected: " << expected << ", Got: " << result << "\n";
        std::cout << "  Execution Time: " << elapsed.count() << " ms\n\n";
    }
}

int main() {
    runTests();
    return 0;
}
