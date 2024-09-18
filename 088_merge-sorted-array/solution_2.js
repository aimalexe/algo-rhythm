/**
 * Merges two sorted arrays nums1 and nums2 into nums1 in non-decreasing order.
 *
 * @param {number[]} nums1 - Array with length m + n where the first m elements represent
 *                           the elements to be merged, and the rest are set to 0.
 * @param {number} m - The number of elements in nums1 that should be merged.
 * @param {number[]} nums2 - Array of n elements, sorted in non-decreasing order.
 * @param {number} n - The number of elements in nums2.
 */
function merge(nums1, m, nums2, n) {
    let mergedArray = [];

    let i = 0, j = 0, k = 0;

    while (i < m && j < n)
        mergedArray[k++] = nums1[i] < nums2[j] ? nums1[i++] : nums2[j++];

    while (i < m)
        mergedArray[k++] = nums1[i++];

    while (j < n)
        mergedArray[k++] = nums2[j++];

    for (let i = 0; i < m + n; i++)
        nums1[i] = mergedArray[i];
}

// Test cases to validate the solution
const testCases = [
    { nums1: [1, 2, 3, 0, 0, 0], m: 3, nums2: [2, 5, 6], n: 3, expected: [1, 2, 2, 3, 5, 6] },
    { nums1: [1], m: 1, nums2: [], n: 0, expected: [1] },
    { nums1: [0], m: 0, nums2: [1], n: 1, expected: [1] },
    { nums1: [4, 5, 6, 0, 0, 0], m: 3, nums2: [1, 2, 3], n: 3, expected: [1, 2, 3, 4, 5, 6] },
    { nums1: [1, 3, 5, 0, 0, 0], m: 3, nums2: [2, 4, 6], n: 3, expected: [1, 2, 3, 4, 5, 6] }
];

testCases.forEach(({ nums1, m, nums2, n, expected }, index) => {
    const startTime = performance.now();
    merge(nums1, m, nums2, n);
    const endTime = performance.now();

    const isSuccess = nums1.join(',') === expected.join(',');
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Expected: [${expected.join(', ')}], Got: [${nums1.join(', ')}]`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
