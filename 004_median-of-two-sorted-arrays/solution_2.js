/**
 * Finds the median of two sorted arrays using binary search, ensuring a time complexity of O(log(min(m, n))).
 * @param {number[]} nums1 - First sorted array.
 * @param {number[]} nums2 - Second sorted array.
 * @return {number} - The median of the two arrays combined.
 */
function findMedianSortedArrays(nums1, nums2) {
    // Ensure nums1 is the smaller array to minimize the binary search space
    if (nums1.length > nums2.length) {
        return findMedianSortedArrays(nums2, nums1);
    }

    const m = nums1.length;  // Length of the smaller array
    const n = nums2.length;  // Length of the larger array
    let low = 0, high = m;   // Binary search range for nums1

    // Perform binary search on nums1
    while (low <= high) {
        const partition1 = Math.floor((low + high) / 2);  // Partition index for nums1
        const partition2 = Math.floor((m + n + 1) / 2) - partition1;  // Partition index for nums2

        // Handle edge cases when partition is at the boundary
        const maxLeft1 = partition1 === 0 ? Number.MIN_SAFE_INTEGER : nums1[partition1 - 1];  // Max of left part of nums1
        const minRight1 = partition1 === m ? Number.MAX_SAFE_INTEGER : nums1[partition1];  // Min of right part of nums1

        const maxLeft2 = partition2 === 0 ? Number.MIN_SAFE_INTEGER : nums2[partition2 - 1];  // Max of left part of nums2
        const minRight2 = partition2 === n ? Number.MAX_SAFE_INTEGER : nums2[partition2];  // Min of right part of nums2

        // Check if the partitions are valid
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            // If the combined length is even, return the average of the two middle elements
            if ((m + n) % 2 === 0) 
                return (Math.max(maxLeft1, maxLeft2) + Math.min(minRight1, minRight2)) / 2;
            // If the combined length is odd, return the middle element
            else 
                return Math.max(maxLeft1, maxLeft2);
        } 
        // If maxLeft1 is too big, move binary search to the left
        else if (maxLeft1 > minRight2) 
            high = partition1 - 1;
        // If maxLeft2 is too big, move binary search to the right
        else 
            low = partition1 + 1;
    }

    // Throw an error if the input arrays are not sorted
    throw new Error("Input arrays are not sorted.");
}

// Test cases
const testCases = [
    [[1, 3], [2]],          // Expected output: 2.0
    [[1, 2], [3, 4]],       // Expected output: 2.5
    [[0, 0], [0, 0]],       // Expected output: 0.0
    [[], [1]],              // Expected output: 1.0
    [[2], []]               // Expected output: 2.0
];

// Run the test cases
testCases.forEach((testCase, index) => {
    const [nums1, nums2] = testCase;
    const median = findMedianSortedArrays(nums1, nums2);
    console.log(`Test Case ${index + 1}: Median is ${median}`);
});
