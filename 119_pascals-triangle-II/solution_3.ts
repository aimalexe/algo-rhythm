/**
 * Function to return the specific row of Pascal's triangle.
 * @param rowIndex - The 0-indexed row to return.
 * @returns An array representing the rowIndex-th row of Pascal's triangle.
 */
function getRow(rowIndex: number): number[] {
    const row: number[] = Array(rowIndex + 1).fill(1);
    let mul = 1;

    // Calculating binomial coefficients using single loop
    for (let i = 1; i < rowIndex; i++) {
        mul *= (rowIndex + 1 - i);
        mul /= i;
        row[i] = mul;
    }

    return row;
}

// Test cases to validate the solution
const testCases = [
    { input: 0, expected: [1] },
    { input: 1, expected: [1, 1] },
    { input: 3, expected: [1, 3, 3, 1] },
    { input: 4, expected: [1, 4, 6, 4, 1] },
    { input: 5, expected: [1, 5, 10, 10, 5, 1] }
];

testCases.forEach(({ input, expected }, index) => {
    const startTime = performance.now();
    const result = getRow(input);
    const endTime = performance.now();
    const isSuccess = JSON.stringify(result) === JSON.stringify(expected);
    
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Input: ${input}`);
    console.log(`  Expected: ${JSON.stringify(expected)}, Got: ${JSON.stringify(result)}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
