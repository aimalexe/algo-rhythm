/**
 * Checks if there are two distinct indices i and j such that nums[i] == nums[j] and abs(i - j) <= k
 * 
 * @param {number[]} nums - The array of integers.
 * @param {number} k - The maximum difference between the indices.
 * @returns {boolean} - True if such pair of indices exist, false otherwise.
 */
function containsNearbyDuplicate(nums, k) {
    const numIndexMap = new Map();

    for (let i = 0; i < nums.length; i++) {
        if (numIndexMap.has(nums[i]) && i - numIndexMap.get(nums[i]) <= k)
            return true;

        numIndexMap.set(nums[i], i);
    }
    return false;
}

// Test cases
const testCases = [
    { input: { nums: [1, 2, 3, 1], k: 3 }, expected: true },
    { input: { nums: [1, 0, 1, 1], k: 1 }, expected: true },
    { input: { nums: [1, 2, 3, 1, 2, 3], k: 2 }, expected: false },
    { input: { nums: [4, 1, 2, 3, 1, 5], k: 3 }, expected: true },
    { input: { nums: [99, 99], k: 2 }, expected: true }
];

// Execute test cases
testCases.forEach(({ input, expected }, index) => {
    const { nums, k } = input;
    const startTime = performance.now();
    const result = containsNearbyDuplicate(nums, k);
    const endTime = performance.now();
    const isSuccess = result === expected;

    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Input: [${nums.join(', ')}], k = ${k}`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
