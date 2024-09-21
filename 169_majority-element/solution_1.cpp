#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    /**
     * Function to find the majority element using Boyer-Moore Voting Algorithm.
     * @param numbers: vector of integers representing the array.
     * @return the majority element.
     */
    int majorityElement(vector<int> &numbers)
    {
        int candidate = numbers[0];
        int occurrenceCount = 1;

        for (int i = 1; i < numbers.size(); ++i)
        {
            // if number occur add 1 else subtract 1
            occurrenceCount += numbers[i] == candidate ? 1 : -1;

            // if count is 0 select another candidate
            if (occurrenceCount == 0)
            {
                candidate = numbers[i];
                occurrenceCount = 1;
            }
        }

        return candidate;
    }
};

// Test cases
int main()
{
    Solution sol;

    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority element in [3, 2, 3]: " << sol.majorityElement(nums1) << endl;             // Output: 3
    cout << "Majority element in [2, 2, 1, 1, 1, 2, 2]: " << sol.majorityElement(nums2) << endl; // Output: 2

    return 0;
}
