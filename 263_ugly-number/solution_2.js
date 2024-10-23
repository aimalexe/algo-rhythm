/**
 * Function to determine if a number is an ugly number using prime factorization.
 * @param {number} n - The input integer.
 * @return {boolean} - true if n is an ugly number, false otherwise.
 */
function isUgly(n) {
    if (n <= 0) return false; // Ugly numbers must be positive integers

    // Check divisibility and reduce the number
    for (const prime of [2, 3, 5])
        while (n % prime === 0)
            n /= prime;

    return n === 1; // If the final result is 1, it is an ugly number
}

// Test cases to validate the solution
console.log("Input: 6, Output:", isUgly(6));   // Expected output: true
console.log("Input: 1, Output:", isUgly(1));   // Expected output: true
console.log("Input: 14, Output:", isUgly(14)); // Expected output: false
