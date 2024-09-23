/**
 * @function hammingWeight
 * @description Counts the number of 1 bits in the binary representation of a number.
 * @param {number} n - The number to process.
 * @returns {number} The count of 1 bits in the binary representation.
 */
function hammingWeight(n: number): number {
    let count = 0;
    while (n !== 0) {
        count += n & 1;
        n >>>= 1; // Unsigned right shift to process the next bit
    }
    return count;
}

// Test cases for validation
function runTests() {
    const testCases = [
        { input: 11, expected: 3 },
        { input: 128, expected: 1 },
        { input: 2147483645, expected: 30 },
        { input: 0, expected: 0 },
        { input: 4294967295, expected: 32 }
    ];

    testCases.forEach(({ input, expected }, index) => {
        const result = hammingWeight(input);
        const isSuccess = result === expected;

        console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
        console.log(`  Input: ${input}`);
        console.log(`  Expected: ${expected}, Got: ${result}`);
    });
}

// Run test cases
runTests();
