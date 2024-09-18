#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

class Solution
{
public:
    /**
     * Merges two sorted arrays firstArray and secondArray into firstArray in non-decreasing order.
     *
     * @param firstArray: vector of integers, has a length of m + n where the first m elements
     *               represent the elements that should be merged, and the last n elements are set to 0.
     * @param m: the number of elements in firstArray that should be merged.
     * @param secondArray: vector of integers, sorted in non-decreasing order, with n elements.
     * @param n: the number of elements in secondArray.
     */
    void merge(vector<int> &firstArray, int m, vector<int> &secondArray, int n)
    {
        int i = m - 1;     // Last element of firstArray's actual values
        int j = n - 1;     // Last element of secondArray
        int k = m + n - 1; // Last position of firstArray (including the extra space)

        while (i >= 0 && j >= 0)
            firstArray[k--] = firstArray[i] > secondArray[j] ? firstArray[i--] : secondArray[j--];

        while (j >= 0)
            firstArray[k--] = secondArray[j--];
    }
};

void runTest(vector<int> nums1, int m, vector<int> nums2, int n, const vector<int> &expected, int index)
{
    Solution solution;

    auto start = chrono::high_resolution_clock::now();
    solution.merge(nums1, m, nums2, n);
    auto end = chrono::high_resolution_clock::now();

    bool isSuccess = (nums1 == expected);
    cout << "Test Case " << index + 1 << ": " << (isSuccess ? "Passed ✅" : "Failed ❌") << "\n";
    cout << "  Expected: ";
    for (int num : expected)
        cout << num << " ";
    cout << "\n  Got: ";
    for (int num : nums1)
        cout << num << " ";
    cout << "\n";

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "  Execution Time: " << duration.count() << " µs\n\n";
}

int main()
{
    vector<vector<int>> nums1List = {
        {1, 2, 3, 0, 0, 0},
        {1},
        {0},
        {4, 5, 6, 0, 0, 0},
        {1, 3, 5, 0, 0, 0}};

    vector<int> mList = {3, 1, 0, 3, 3};

    vector<vector<int>> nums2List = {
        {2, 5, 6},
        {},
        {1},
        {1, 2, 3},
        {2, 4, 6}};

    vector<int> nList = {3, 0, 1, 3, 3};

    vector<vector<int>> expectedList = {
        {1, 2, 2, 3, 5, 6},
        {1},
        {1},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6}};

    for (int i = 0; i < nums1List.size(); i++)
    {
        runTest(nums1List[i], mList[i], nums2List[i], nList[i], expectedList[i], i);
    }

    return 0;
}
