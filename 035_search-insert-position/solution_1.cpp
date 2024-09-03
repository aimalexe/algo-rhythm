#include <iostream>
#include <vector>

/**
 * Finds the index where the target should be inserted in a sorted array.
 * 
 * @param nums - The sorted array of distinct integers.
 * @param target - The target value to find or insert.
 * @return The index where the target should be inserted.
 */
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return left;
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    std::vector<std::vector<int>> testCases = {
        {1, 3, 5, 6},
        {1, 3, 5, 6},
        {1, 3, 5, 6}
    };

    std::vector<int> targets = {5, 2, 7};
    std::vector<int> expected = {2, 1, 4};

    for (size_t i = 0; i < testCases.size(); ++i) {
        int result = solution.searchInsert(testCases[i], targets[i]);
        std::cout << "Test Case " << i + 1 << ": " << (result == expected[i] ? "Passed" : "Failed") << "\n";
        std::cout << "  Input: nums = [";
        for (size_t j = 0; j < testCases[i].size(); ++j) {
            std::cout << testCases[i][j];
            if (j < testCases[i].size() - 1) std::cout << ", ";
        }
        std::cout << "], target = " << targets[i] << "\n";
        std::cout << "  Expected: " << expected[i] << ", Got: " << result << "\n\n";
    }
}

int main() {
    runTests();
    return 0;
}
