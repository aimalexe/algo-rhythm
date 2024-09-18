class Solution:
    def climbStairs(self, n: int) -> int:
        # If n is less than or equal to 1, there's only one way to climb
        if n <= 1:
            return 1
        
        # Initialize the dp array to store the number of ways to reach each step
        dp = [0] * (n + 1)
        
        dp[0] = 1  # There's 1 way to be at the ground (no steps)
        dp[1] = 1  # There's 1 way to reach the first step
        
        # Fill the dp array with the number of ways to reach each step
        for i in range(2, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]
        
        # Return the number of ways to reach the nth step
        return dp[n]

# Function to run test cases
def run_tests():
    test_cases = [2, 3, 4, 5, 6]
    expected = [2, 3, 5, 8, 13]
    sol = Solution()

    for i, test_case in enumerate(test_cases):
        result = sol.climbStairs(test_case)
        print(f"Test Case {i + 1}: Input: {test_case} | Expected: {expected[i]} | Got: {result}")

run_tests()
