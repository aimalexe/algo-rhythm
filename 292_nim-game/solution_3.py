class Solution:
    def canWinNim(self, n: int) -> bool:
        if n <= 3:
            return True
        dp = [False] * (n + 1)
        
        dp[1], dp[2], dp[3] = True, True, True
        
        for i in range(4, n + 1):
            dp[i] = not dp[i - 1] or not dp[i - 2] or not dp[i - 3]
        
        return dp[n]

# Test cases for Python solution
s = Solution()
print(s.canWinNim(4))  # False
print(s.canWinNim(1))  # True
print(s.canWinNim(2))  # True
print(s.canWinNim(5))  # True
