/**
 * Removes all occurrences of a specified value from the array in place.
 * 
 * @param {number[]} nums - The array of numbers.
 * @param {number} val - The value to remove.
 * @return {number} The number of elements in the array after removing the specified value.
 */
const removeElement = function(nums, val) {
    let k = 0;

    for (let i = 0; i < nums.length; i++) {
        if (nums[i] !== val) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
};

// Test cases to validate the solution
const testCases = [
    { input: [3, 2, 2, 3], val: 3, expected: 2 },
    { input: [0, 1, 2, 2, 3, 0, 4, 2], val: 2, expected: 5 },
    { input: [], val: 1, expected: 0 },
    { input: [2], val: 3, expected: 1 },
];

testCases.forEach(({ input, val, expected }, index) => {
    const startTime = performance.now();
    const result = removeElement(input, val);
    const endTime = performance.now();
    const isSuccess = result === expected;
    
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed" : "Failed"}`);
    console.log(`  Input: [${input.join(', ')}], Value to Remove: ${val}`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
