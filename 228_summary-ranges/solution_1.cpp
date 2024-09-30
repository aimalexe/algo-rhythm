#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution
{
public:
    /**
     * @brief Generates summary ranges from a sorted unique integer array.
     *
     * @param nums A sorted unique integer array.
     * @return A vector of strings representing the summary ranges.
     */
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;

        if (nums.empty())
            return result; // Return empty if input is empty

        int start = nums[0]; // Starting point of a range
        int length = nums.size();

        for (int i = 1; i <= length; i++)
            // Check if the current number is not continuous
            if (i == length || nums[i] != nums[i - 1] + 1)
            {
                // If start is the same as current number, just add start
                if (start == nums[i - 1])
                    result.push_back(to_string(start));
                else
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
                start = (i < length) ? nums[i] : 0; // Update start for next range
            }

        return result;
    }
};

// Test cases
#include <iostream>

int main()
{
    Solution s;
    vector<int> nums1 = {0, 1, 2, 4, 5, 7};
    vector<string> result1 = s.summaryRanges(nums1);
    for (const string &range : result1)
    {
        cout << range << " ";
    }
    cout << endl; // Expected output: ["0->2", "4->5", "7"]

    vector<int> nums2 = {0, 2, 3, 4, 6, 8, 9};
    vector<string> result2 = s.summaryRanges(nums2);
    for (const string &range : result2)
    {
        cout << range << " ";
    }
    cout << endl; // Expected output: ["0", "2->4", "6", "8->9"]

    return 0;
}
