class Solution {
  void moveZeroes(List<int> nums) {
    int lastNonZeroFoundAt = 0;

    // Move all non-zero elements to the front of the array.
    for (int current = 0; current < nums.length; current++)
      if (nums[current] != 0) {
        int temp = nums[lastNonZeroFoundAt];
        nums[lastNonZeroFoundAt] = nums[current];
        nums[current] = temp;
        lastNonZeroFoundAt++;
      }
  }
}

// Test cases for Dart solution
void runTests() {
  Solution s = Solution();
  List<int> nums1 = [0, 1, 0, 3, 12];
  List<int> nums2 = [0];

  s.moveZeroes(nums1);
  s.moveZeroes(nums2);

  print('Test Case 1: ${nums1}');
  print('Test Case 2: ${nums2}');
}

void main() {
  runTests();
}
