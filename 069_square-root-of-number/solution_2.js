/**
 * Function to calculate the square root of a given non-negative integer using a linear search approach.
 * 
 * @param {number} x - The non-negative integer whose square root needs to be found.
 * @return {number} The integer part of the square root of x.
 */
var mySqrt = function (x) {
    if (x === 0 || x === 1) return x; // Base cases

    let i = 1;

    // Increment i while i*i is less than or equal to x
    while (i * i <= x) {
        i++;
    }

    return i - 1;  // Return the last valid i that satisfies i*i <= x
};

// Function to run and validate test cases
function runTests() {
    const testCases = [4, 8, 16, 25, 26, 52, 88];
    const expected = [2, 2, 4, 5, 5, 7, 9];

    testCases.forEach((testCase, index) => {
        const result = mySqrt(testCase);
        console.log(`Test Case ${index + 1}: Input: ${testCase} | Expected: ${expected[index]} | Got: ${result}`);
    });
}

runTests();
