/**
 * Finds the intersection of two arrays including duplicates.
 * 
 * @param nums1 The first array of numbers.
 * @param nums2 The second array of numbers.
 * @return A list containing the intersection of nums1 and nums2.
 */
function intersect(nums1: number[], nums2: number[]): number[] {
    const countMap: Record<number, number> = {};
    const result: number[] = [];

    // Count occurrences of each element in nums1
    for (const num of nums1) 
        countMap[num] = (countMap[num] || 0) + 1;

    // Check for intersection with nums2
    for (const num of nums2) 
        if (countMap[num] && countMap[num] > 0) {
            result.push(num);
            countMap[num]--;
        }

    return result;
}

// Test case 1
console.log(intersect([1, 2, 2, 1], [2, 2]));  // Output: [2, 2]

// Test case 2
console.log(intersect([4, 9, 5], [9, 4, 9, 8, 4]));  // Output: [4, 9]
