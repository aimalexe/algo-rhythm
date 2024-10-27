#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    /**
     * Finds the intersection of two arrays including duplicates.
     *
     * @param nums1 The first input array.
     * @param nums2 The second input array.
     * @return A vector containing the intersection of nums1 and nums2.
     */
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> countMap;
        vector<int> result;

        // Count occurrences of each element in nums1
        for (int num : nums1)
            countMap[num]++;

        // Check for intersection with nums2
        for (int num : nums2)
            if (countMap[num] > 0)
            {
                result.push_back(num);
                countMap[num]--;
            }

        return result;
    }
};

int main()
{
    Solution s;
    // Test case 1
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = s.intersect(nums1, nums2);

    for (int num : result)
    {
        cout << num << " "; // Output: 2 2
    }
    cout << endl;

    // Test case 2
    nums1 = {4, 9, 5};
    nums2 = {9, 4, 9, 8, 4};
    result = s.intersect(nums1, nums2);

    for (int num : result)
    {
        cout << num << " "; // Output: 4 9
    }
    cout << endl;

    return 0;
}
