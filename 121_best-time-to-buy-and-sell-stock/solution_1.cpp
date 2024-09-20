#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    /**
     * Function to calculate maximum profit using two pointer approach.
     * @param prices: Vector of stock prices.
     * @return Maximum profit.
     */
    int maxProfit(const vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices)
        {
            minPrice = min(minPrice, price);    // Update the minimum price seen so far
            int currentProfit = price - minPrice;      // Calculate currentProfit if we sold at the current price
            maxProfit = max(maxProfit, currentProfit); // Keep track of the maximum profit encountered
        }
        return maxProfit;
    }
};

void runTests()
{
    Solution sol;
    vector<vector<int>> testCases = {
        {7, 1, 5, 3, 6, 4}, // Expected: 5
        {7, 6, 4, 3, 1},    // Expected: 0
        {1, 2, 3, 4, 5},    // Expected: 4
        {2, 4, 1, 7},       // Expected: 6
        {2, 1, 4}           // Expected: 3
    };

    for (int i = 0; i < testCases.size(); ++i)
    {
        int result = sol.maxProfit(testCases[i]);
        cout << "Test Case " << i + 1 << ": Max Profit = " << result << endl;
    }
}

int main()
{
    runTests();
    return 0;
}
