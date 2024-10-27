class Solution {
/**
 * Finds the intersection of two arrays.
 * 
 * @param nums1 The first list of integers.
 * @param nums2 The second list of integers.
 * @return A list containing the unique intersection of nums1 and nums2.
 */
  List<int> intersection(List<int> nums1, List<int> nums2) {
    Set<int> set1 = nums1.toSet(); // Convert nums1 to a set
    Set<int> resultSet = {}; // Initialize an empty set for the result

    // Check for intersection
    for (int num in nums2)
      if (set1.contains(num))
        resultSet.add(num); // Add to result set ensuring uniqueness

    // Convert the result set to a list
    return resultSet.toList();
  }
}

void main() {
  Solution s = Solution();

  // Test case 1
  List<int> nums1 = [1, 2, 2, 1];
  List<int> nums2 = [2, 2];
  List<int> result = s.intersection(nums1, nums2);
  print(result); // Output: [2]

  // Test case 2
  nums1 = [4, 9, 5];
  nums2 = [9, 4, 9, 8, 4];
  result = s.intersection(nums1, nums2);
  print(result); // Output: [9, 4]
}
