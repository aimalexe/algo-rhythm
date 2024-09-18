#include <iostream>
#include <vector>
using namespace std;

/**
 * A class that provides a method to calculate the number of distinct ways
 * to climb a staircase with `n` steps, where you can either take 1 or 2 steps.
 * This solution uses recursion with memoization to store intermediate results.
 */
class Solution {
public:
    /**
     * Function to calculate the number of ways to climb `n` stairs.
     * 
     * @param n - The total number of steps to reach the top.
     * @return The number of distinct ways to climb to the top.
     */
    int climbStairs(int n) {
        // Memoization array initialized with -1 (uncomputed states)
        vector<int> memo(n + 1, -1);
        return helper(n, memo);
    }

private:
    /**
     * Helper function to calculate the number of ways to climb stairs recursively with memoization.
     * 
     * @param n - The current number of steps.
     * @param memo - The memoization array to store intermediate results.
     * @return The number of ways to climb `n` stairs.
     */
    int helper(int n, vector<int>& memo) {
        if (n <= 1) return 1;  // Base case: 1 way to climb 0 or 1 step

        // If result is already computed, return it
        if (memo[n] != -1) return memo[n];

        // Recursively calculate the number of ways for n-1 and n-2 steps
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);
        return memo[n];
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    int testCases[] = {2, 3, 4, 5, 6};
    int expected[] = {2, 3, 5, 8, 13};

    for (int i = 0; i < 5; i++) {
        int result = solution.climbStairs(testCases[i]);
        cout << "Test Case " << i + 1 << ": ";
        cout << "Input: " << testCases[i] << " | Expected: " << expected[i] << " | Got: " << result << endl;
    }
}

int main() {
    runTests();
    return 0;
}
