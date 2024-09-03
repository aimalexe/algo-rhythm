int searchInsert(List<int> nums, int target) {
  int left = 0;
  int right = nums.length - 1;

  while (left <= right) {
    int mid = left + (right - left) ~/ 2;

    if (nums[mid] == target) {
      return mid;
    } else if (nums[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return left;
}

// Test cases to validate the solution
void main() {
  List<List<int>> testCases = [
    [1, 3, 5, 6],
    [1, 3, 5, 6],
    [1, 3, 5, 6]
  ];

  List<int> targets = [5, 2, 7];
  List<int> expected = [2, 1, 4];

  for (int i = 0; i < testCases.length; i++) {
    int result = searchInsert(testCases[i], targets[i]);
    print('Test Case ${i + 1}: ${result == expected[i] ? "Passed" : "Failed"}');
    print('  Input: nums = ${testCases[i]}, target = ${targets[i]}');
    print('  Expected: ${expected[i]}, Got: $result\n');
  }
}
