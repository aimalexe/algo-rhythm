class Solution {
/**
 * @brief Counts the number of 1's in the binary representation of each number from 0 to n.
 * 
 * This approach uses Brian Kernighan's Algorithm. For each number, we repeatedly flip the lowest
 * set bit and count the number of iterations until the number becomes zero.
 * 
 * @param n The maximum number to compute the bit counts for.
 * 
 * @return List<int> A list containing the number of 1's for each number from 0 to n.
 */
  List<int> countBits(int n) {
    List<int> result = List.filled(n + 1, 0);

    for (int i = 0; i <= n; i++) {
      int count = 0;
      int num = i;
      // Use Brian Kernighan's algorithm to count set bits
      while (num > 0) {
        num &= (num - 1); // flip the lowest set bit
        count++;
      }
      result[i] = count;
    }

    return result;
  }
}

void main() {
  Solution s = Solution();
  int n = 9;
  List<int> result = s.countBits(n);

  // Output the result
  for (int i in result) print(i);
}
