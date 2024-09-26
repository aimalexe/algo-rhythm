#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution
{
public:
    /**
     * Checks if there are two distinct indices i and j such that nums[i] == nums[j] and abs(i - j) <= k
     *
     * @param nums The array of integers.
     * @param k The maximum difference between the indices.
     * @return true if such pair of indices exist, false otherwise.
     */
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> numIndexMap;
        int numsLength =nums.size();

        for (int i = 0; i < numsLength; i++)
        {
            // If the number exists and the difference between indices is <= k
            if (numIndexMap.find(nums[i]) != numIndexMap.end() && i - numIndexMap[nums[i]] <= k)
                return true;

            // Update the index of the current number
            numIndexMap[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    // Test cases
    vector<pair<vector<int>, int>> testCases = {
        {{1, 2, 3, 1}, 3},
        {{1, 0, 1, 1}, 1},
        {{1, 2, 3, 1, 2, 3}, 2},
        {{4, 1, 2, 3, 1, 5}, 3},
        {{99, 99}, 2}};
Solution s;
    for (int i = 0; i < testCases.size(); i++)
    {
        vector<int> nums = testCases[i].first;
        int k = testCases[i].second;
        cout << "Test Case " << i + 1 << ": "
             << (s.containsNearbyDuplicate(nums, k) ? "Passed ✅" : "Failed ❌") << endl;
    }

    return 0;
}
