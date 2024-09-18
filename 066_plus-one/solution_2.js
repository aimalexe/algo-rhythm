/**
 * Function to increment the large integer represented as an array of digits by 1.
 * 
 * @param {number[]} digitsSequence - An array of digits representing the large integer.
 * @return {number[]} - The resulting array of digits after incrementing by 1.
 */
const plusOne = function(digitsSequence) {
    // first approach:
    /* const numDigits = digitsSequence.length;
    for (let index = numDigits - 1; index >= 0; index--) {
        if (digitsSequence[index] < 9) {
            digitsSequence[index]++;
            return digitsSequence;
        }
        digitsSequence[index] = 0; 
    }
    digitsSequence.unshift(1);
    return digitsSequence; */ 

    // or Second approach:
    const num = BigInt(digitsSequence.join('')) + BigInt(1);
    return Array.from(num.toString()).map(Number);
};

// Function to run and validate test cases
function runTests() {
    const solution = plusOne;

    // Test cases from the prompt
    const testCases = [
        [1, 2, 3],        // Test case 1
        [4, 3, 2, 1],     // Test case 2
        [9],               // Test case 3
        [9, 9, 9],
        [1, 9, 9, 6]
    ];

    const expected = [
        [1, 2, 4],        // Expected result for test case 1
        [4, 3, 2, 2],     // Expected result for test case 2
        [1, 0],            // Expected result for test case 3
        [1, 0, 0, 0],
        [1, 9, 9, 7]
    ];

    testCases.forEach((testCase, i) => {
        const result = solution(testCase);
        console.log(`Test Case ${i + 1}: ${JSON.stringify(result) === JSON.stringify(expected[i]) ? 'Passed' : 'Failed'}`);
        console.log(`  Input: ${JSON.stringify(testCase)}`);
        console.log(`  Expected: ${JSON.stringify(expected[i])}, Got: ${JSON.stringify(result)}\n`);
    });
}

runTests();
