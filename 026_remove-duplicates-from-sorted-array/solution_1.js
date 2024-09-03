/**
 * Removes duplicates from a sorted array in place and returns the number of unique elements.
 * 
 * @param {number[]} nums - The sorted input array.
 * @return {number} The number of unique elements in the array.
 */
const removeDuplicates = function(nums) {
    const size = nums.length;
    if (size === 0) return 0;

    let uniqueCount = 1;

    for (let i = 1; i < size; i++) {
        if (nums[i] !== nums[i - 1]) {
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }

    return uniqueCount;
};

// Test cases to validate the solution
const testCases = [
    { input: [1, 1, 2], expected: 2 },
    { input: [0, 0, 1, 1, 1, 2, 2, 3, 3, 4], expected: 5 },
    { input: [], expected: 0 },
    { input: [-1], expected: 1 },
];

testCases.forEach(({ input, expected }, index) => {
    const startTime = performance.now();
    const result = removeDuplicates(input);
    const endTime = performance.now();
    const isSuccess = result === expected;
    
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Input: [${input.join(', ')}]`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});