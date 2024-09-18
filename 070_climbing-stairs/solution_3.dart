class Solution {
  int climbStairs(int n) {
    if (n <= 1) return 1;

    int prev2 = 1; // Ways to reach step n-2
    int prev1 = 1; // Ways to reach step n-1
    int current = 0;

    for (int i = 2; i <= n; i++) {
      current = prev1 + prev2;
      prev2 = prev1;
      prev1 = current;
    }

    return current;
  }
}

// Function to run test cases
void runTests() {
  List<int> testCases = [2, 3, 4, 5, 6];
  List<int> expected = [2, 3, 5, 8, 13];
  Solution sol = Solution();
  
  for (int i = 0; i < testCases.length; i++) {
    int result = sol.climbStairs(testCases[i]);
    print(
        'Test Case ${i + 1}: Input: ${testCases[i]} | Expected: ${expected[i]} | Got: $result');
  }
}

void main() {
  runTests();
}
