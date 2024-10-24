#include <vector>
#include <iostream>

class Solution
{
public:
    /**
     * Function to move all zeros in the array to the end while maintaining the relative order of non-zero elements.
     * @param nums: A reference to the array of integers.
     */
    void moveZeroes(std::vector<int> &nums)
    {
        int length = nums.size();
        int lastNonZeroFoundAt = 0;

        // Move all non-zero elements to the front of the array.
        for (int current = 0; current < length; ++current)
            if (nums[current] != 0)
                std::swap(nums[lastNonZeroFoundAt++], nums[current]);
    }
};

// Test cases for C++ solution
void runTests()
{
    Solution s;
    std::vector<int> nums1 = {0, 1, 0, 3, 12};
    std::vector<int> nums2 = {0};

    s.moveZeroes(nums1);
    s.moveZeroes(nums2);

    std::cout << "Test Case 1: ";
    for (int num : nums1)
        std::cout << num << " ";
    std::cout << std::endl;

    std::cout << "Test Case 2: ";
    for (int num : nums2)
        std::cout << num << " ";
    std::cout << std::endl;
}

int main()
{
    runTests();
    return 0;
}
