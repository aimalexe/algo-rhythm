#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    /**
     * Finds the intersection of two arrays.
     *
     * @param nums1 The first input array.
     * @param nums2 The second input array.
     * @return A vector containing the unique intersection of nums1 and nums2.
     */
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;

        // Check for intersection
        for (int num : nums2)
            if (set1.count(num))
                resultSet.insert(num); // Ensure uniqueness

        // Convert set to vector for the result
        return vector<int>(resultSet.begin(), resultSet.end());
    }
};

int main()
{
    Solution s;
    // Test case 1
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = s.intersection(nums1, nums2);

    for (int num : result)
    {
        cout << num << " "; // Output: 2
    }
    cout << endl;

    // Test case 2
    nums1 = {4, 9, 5};
    nums2 = {9, 4, 9, 8, 4};
    result = s.intersection(nums1, nums2);

    for (int num : result)
    {
        cout << num << " "; // Output: 4 9
    }
    cout << endl;

    return 0;
}
