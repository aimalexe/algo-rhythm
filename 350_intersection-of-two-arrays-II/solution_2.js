/**
 * Finds the intersection of two arrays including duplicates.
 * 
 * @param {number[]} nums1 - The first array of numbers.
 * @param {number[]} nums2 - The second array of numbers.
 * @return {number[]} - The array containing the intersection of nums1 and nums2.
 */
function intersect(nums1, nums2) {
    // Sort both arrays
    nums1.sort((a, b) => a - b);
    nums2.sort((a, b) => a - b);

    let i = 0, j = 0;
    const result = [];

    // Two-pointer technique
    while (i < nums1.length && j < nums2.length) {
        if (nums1[i] === nums2[j]) {
            result.push(nums1[i]);
            i++;
            j++;
        } else if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }

    return result;
}

// Test case 1
console.log(intersect([1, 2, 2, 1], [2, 2]));  // Output: [2, 2]

// Test case 2
console.log(intersect([4, 9, 5], [9, 4, 9, 8, 4]));  // Output: [4, 9]
