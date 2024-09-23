class Solution:
    def digitSquareSum(self, n: int) -> int:
        sum = 0
        while n:
            digit = n % 10
            sum += digit * digit
            n //= 10
        return sum

    def isHappy(self, n: int) -> bool:
        slow = fast = n
        while True:
            slow = self.digitSquareSum(slow)
            fast = self.digitSquareSum(fast)
            fast = self.digitSquareSum(fast)
            if slow == fast:
                break
        return slow == 1

# Test cases
sol = Solution()
print(sol.isHappy(23))  # Expected: True
print(sol.isHappy(17))  # Expected: False
