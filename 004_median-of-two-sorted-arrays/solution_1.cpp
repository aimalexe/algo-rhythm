#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    /**
     * Finds the median of two sorted arrays using binary search, ensuring a time complexity of O(log(min(m, n))).
     * @param nums1 First sorted array.
     * @param nums2 Second sorted array.
     * @return The median of the two arrays combined.
     */
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        // Ensure nums1 is the smaller array to minimize the binary search space
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();  // Size of the smaller array
        int n = nums2.size();  // Size of the larger array
        int low = 0, high = m; // Binary search space is within nums1

        // Perform binary search on nums1
        while (low <= high)
        {
            int partition1 = (low + high) / 2;             // Partition index for nums1
            int partition2 = (m + n + 1) / 2 - partition1; // Partition index for nums2

            // Handle edge cases when partition is at the boundary
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1]; // Max of left part of nums1
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];    // Min of right part of nums1

            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1]; // Max of left part of nums2
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];    // Min of right part of nums2

            // Check if the partitions are valid
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1)
                // If combined length is even, return average of the two middle values
                if ((m + n) % 2 == 0)
                    return (std::max(maxLeft1, maxLeft2) + std::min(minRight1, minRight2)) / 2.0;
                // If combined length is odd, return the middle value
                else
                    return std::max(maxLeft1, maxLeft2);
            // If maxLeft1 is too big, move the binary search to the left
            else if (maxLeft1 > minRight2)
                high = partition1 - 1;
            // If maxLeft2 is too big, move the binary search to the right
            else
                low = partition1 + 1;
        }
        // Throw an exception if the input arrays are not sorted
        throw std::invalid_argument("Input arrays are not sorted.");
    }
};

// Test cases
int main()
{
    std::vector<std::pair<std::vector<int>, std::vector<int>>> testCases = {
        {{1, 3}, {2}},
        {{1, 2}, {3, 4}},
        {{0, 0}, {0, 0}},
        {{}, {1}},
        {{2}, {}}};

    Solution sol;

    // Test the function with multiple cases
    for (auto &testCase : testCases)
        std::cout << "Median of arrays: " << sol.findMedianSortedArrays(testCase.first, testCase.second) << std::endl;

    return 0;
}
