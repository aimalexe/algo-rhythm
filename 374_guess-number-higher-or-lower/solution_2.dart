// Mock guess API (this is provided by the problem)
int pick = 6; // For testing purposes, assume the picked number is 6

int guess(int num) {
  if (num > pick) return -1;
  if (num < pick) return 1;
  return 0;
}

class Solution {
/**
 * Performs binary search to guess the number.
 * 
 * @param n The upper limit of the range (inclusive).
 * @return The picked number.
 */
  int guessNumber(int n) {
    int left = 1;
    int right = n;

    while (left <= right) {
      int mid = left + (right - left) ~/ 2; // Integer division
      int result = guess(mid);

      if (result == 0)
        return mid; // Correct guess
      else if (result == -1)
        right = mid - 1; // Guess is higher, move left
      else
        left = mid + 1; // Guess is lower, move right
    }

    return -1; // This should never happen
  }
}

void main() {
  Solution s = Solution();
  int n = 10;
  print('Picked number: ${s.guessNumber(n)}'); // Output: 6
}
