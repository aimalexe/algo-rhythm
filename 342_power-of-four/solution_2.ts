/**
 * Determines if a number is a power of four using logarithms.
 * 
 * The base-4 logarithm of a power of four is an integer, so we can take the
 * log base 4 of the number using log(n) / log(4) and check if the result is an integer.
 * 
 * @param n The number to check.
 * @returns True if the number is a power of four, otherwise false.
 */
function isPowerOfFour(n: number): boolean {
    // Ensure n is positive and check if log4(n) is an integer
    if (n <= 0) return false;
    const logBase4 = Math.log(n) / Math.log(4);
    return Math.abs(logBase4 - Math.round(logBase4)) < 1e-10;
}

// Test cases
console.log(isPowerOfFour(16));  // Output: true
console.log(isPowerOfFour(5));   // Output: false
console.log(isPowerOfFour(1));   // Output: true
