/**
 * Function to find the single number using a Set.
 * @param {number[]} nums - The input array of integers where every element appears twice except one.
 * @return {number} - The single number.
 */
function singleNumber(nums) {
    const numSet = new Set();

    for (const num of nums)
        if (numSet.has(num))
            numSet.delete(num);  // Remove the number if it appears twice
        else
            numSet.add(num);  // Add the number if it's the first occurrence

    // The only number left in the set is the single number
    return [...numSet][0];
}

// Test cases to validate the solution
const testCases = [
    [2, 2, 1],         // Expected: 1
    [4, 1, 2, 1, 2],   // Expected: 4
    [1],               // Expected: 1
    [5, 5, 6],         // Expected: 6
    [9, 3, 9, 3, 8]    // Expected: 8
];

testCases.forEach((nums, index) => {
    const result = singleNumber(nums);
    console.log(`Test Case ${index + 1}: Single Number = ${result}`);
});
