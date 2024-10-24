/**
 * Function to find the missing number using the XOR approach.
 * @param {number[]} nums - An array of n distinct numbers in the range [0, n].
 * @return {number} - The missing number in the range.
 */
function missingNumber(nums) {
    let size = nums.length;
    let missing = size;

    for (let i = 0; i < size; i++)
        missing ^= i ^ nums[i];

    return missing;
}

// Test cases for JavaScript solution
const testCases = [
    { input: [3, 0, 1], expected: 2 },
    { input: [0, 1], expected: 2 },
    { input: [9, 6, 4, 2, 3, 5, 7, 0, 1], expected: 8 },
];

testCases.forEach(({ input, expected }, index) => {
    const result = missingNumber(input);
    console.log(`Test Case ${index + 1}: ${result === expected ? 'Passed' : 'Failed'}`);
    console.log(`  Input: [${input.join(', ')}]`);
    console.log(`  Expected: ${expected}, Got: ${result}\n`);
});
