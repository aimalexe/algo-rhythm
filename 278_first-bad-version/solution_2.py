# Assume isBadVersion(version) API is given
def isBadVersion(version):
    # Mock implementation of the API (example)
    # This would be provided in an actual problem
    bad = 4
    return version >= bad

class Solution:
    def firstBadVersion(self, n:int) -> int:
        """
        Function to find the first bad version using binary search.
        
        :param n: The total number of versions.
        :return: The first bad version.
        """
        left, right = 1, n
        
        while left < right:
            mid = left + (right - left) // 2
            if isBadVersion(mid):
                right = mid  # Narrow down to the left half (mid is bad)
            else:
                left = mid + 1  # Narrow down to the right half (mid is good)
        
        return left  # left will be the first bad version

# Test cases for Python solution
def run_tests():
    s = Solution()
    test_cases = [
        {"n": 5, "expected": 4},
        {"n": 1, "expected": 1}
    ]
    
    for i, test in enumerate(test_cases):
        result = s.firstBadVersion(test['n'])
        print(f"Test Case {i + 1}: {'Passed' if result == test['expected'] else 'Failed'}")

run_tests()
