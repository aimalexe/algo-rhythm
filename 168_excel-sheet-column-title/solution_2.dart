class Solution {
  String convertToTitle(int columnNumber) {
    // Base case for recursion
    if (columnNumber == 0) {
      return "";
    }
    columnNumber--; // Adjust for 1-based index
    int remainder = columnNumber % 26;
    return convertToTitle(columnNumber ~/ 26) +
        String.fromCharCode(65 + remainder);
  }
}

// Test cases
void main() {
  Solution sol = Solution();
  print("Test Case 1: ${sol.convertToTitle(1)}"); // Output: "A"
  print("Test Case 2: ${sol.convertToTitle(28)}"); // Output: "AB"
  print("Test Case 3: ${sol.convertToTitle(4009)}"); // Output: "EXE"
}
