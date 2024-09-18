/**
 * Function to calculate the number of ways to climb `n` stairs using memoization.
 * 
 * @param {number} n - The total number of steps to reach the top.
 * @return {number} - The number of distinct ways to climb to the top.
 */
const climbStairsMemo = function(n) {
    const memo = new Array(n + 1).fill(-1);
    
    function helper(steps) {
        if (steps <= 1) return 1;
        if (memo[steps] !== -1) return memo[steps];
        
        memo[steps] = helper(steps - 1) + helper(steps - 2);
        return memo[steps];
    }
    
    return helper(n);
};

// Function to run test cases
function runTests() {
    const testCases = [2, 3, 4, 5, 6];
    const expected = [2, 3, 5, 8, 13];

    testCases.forEach((testCase, index) => {
        const result = climbStairsMemo(testCase);
        console.log(`Test Case ${index + 1}: Input: ${testCase} | Expected: ${expected[index]} | Got: ${result}`);
    });
}

runTests();
