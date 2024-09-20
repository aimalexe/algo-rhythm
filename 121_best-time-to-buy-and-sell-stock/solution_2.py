from typing import List
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        def kadane(arr):
            max_curr, max_so_far = 0, 0
            for i in range(1, len(arr)):
                # Calculate current profit difference
                max_curr = max(0, max_curr + arr[i] - arr[i-1])
                max_so_far = max(max_so_far, max_curr)
            return max_so_far

        return kadane(prices)

# Test cases to validate the solution
testCases = [
    [7, 1, 5, 3, 6, 4],  # Expected: 5
    [7, 6, 4, 3, 1],     # Expected: 0
    [1, 2, 3, 4, 5],     # Expected: 4
    [2, 4, 1, 7],        # Expected: 6
    [2, 1, 4]            # Expected: 3
]
sol = Solution()

for idx, prices in enumerate(testCases):
    result = sol.maxProfit(prices)
    print(f"Test Case {idx + 1}: Max Profit = {result}")
