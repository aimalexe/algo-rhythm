#include <iostream>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    /**
     * Checks if the array contains any duplicate elements.
     * @param nums The input array of integers.
     * @return True if there are duplicates, otherwise false.
     */
    bool containsDuplicate(const std::vector<int> &nums)
    {
        std::unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.find(num) != seen.end())
                return true; // Duplicate found
            seen.insert(num);
        }
        return false; // No duplicates
    }
};

// Test cases
int main()
{
    Solution sol;

    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::vector<int> nums2 = {1, 2, 3, 1};
    std::vector<int> nums3 = {1, 1, 1, 1};
    std::vector<int> nums4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << std::boolalpha;
    std::cout << "Test Case 1: " << sol.containsDuplicate(nums1) << std::endl; // Output: false
    std::cout << "Test Case 2: " << sol.containsDuplicate(nums2) << std::endl; // Output: true
    std::cout << "Test Case 3: " << sol.containsDuplicate(nums3) << std::endl; // Output: true
    std::cout << "Test Case 4: " << sol.containsDuplicate(nums4) << std::endl; // Output: false
}
