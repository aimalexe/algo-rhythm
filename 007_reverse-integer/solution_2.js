/**
 * Reverse the digits of a 32-bit signed integer.
 * If the reversed integer goes out of bounds of a 32-bit integer, return 0.
 * @param {number} x - The integer to reverse.
 * @return {number} - The reversed integer or 0 if overflow occurs.
 */
function reverse(x) {
    let reversedNumber = 0;
    const maxInt = Math.pow(2, 31) - 1;
    const minInt = -Math.pow(2, 31);

    while (x !== 0) {
        let pop = x % 10;
        x = Math.trunc(x / 10);

        // Check for overflow/underflow
        if (reversedNumber > Math.floor(maxInt / 10) || (reversedNumber === Math.floor(maxInt / 10) && pop > 7)) 
            return 0;
        if (reversedNumber < Math.ceil(minInt / 10) || (reversedNumber === Math.ceil(minInt / 10) && pop < -8)) 
            return 0;

        reversedNumber = reversedNumber * 10 + pop;
    }

    return reversedNumber;
}

// Test cases
const testCases = [
    { input: 123, expected: 321 },
    { input: -123, expected: -321 },
    { input: 120, expected: 21 },
    { input: 0, expected: 0 },
    { input: 1534236469, expected: 0 } // This causes overflow, so return 0
];

// Running test cases
testCases.forEach(({ input, expected }, index) => {
    const startTime = performance.now();
    const result = reverse(input);
    const endTime = performance.now();
    const isSuccess = result === expected;

    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Input: ${input}`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
