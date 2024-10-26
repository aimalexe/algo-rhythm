/**
 * @description Determines if the given number is a power of three using logarithmic properties.
 * @param {number} n - The integer input to check.
 * @returns {boolean} - Returns true if n is a power of three, otherwise false.
 */
function isPowerOfThree(n) {
    // If n is less than or equal to 0, it cannot be a power of three
    if (n <= 0) return false;
    // Calculate log3(n) and check if the result is an integer by comparing with a rounded version
    const log3n = Math.log(n) / Math.log(3);
    return Math.abs(log3n - Math.round(log3n)) < 1e-10;
}

// Test cases
console.log(isPowerOfThree(27)); // Output: true
console.log(isPowerOfThree(0));  // Output: false
console.log(isPowerOfThree(-1)); // Output: false
console.log(isPowerOfThree(9));  // Output: true
