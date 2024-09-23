/**
 * @function isHappy
 * @description Determines if a number is a happy number.
 * @param {number} n - The input number.
 * @returns {boolean} - Returns true if the number is happy, false if not.
 */
function isHappy(n) {
    const seen = new Set();

    const getNext = (num) => {
        let totalSum = 0;
        while (num > 0) {
            const digit = num % 10;
            totalSum += digit * digit;
            num = Math.floor(num / 10);
        }
        return totalSum;
    };

    while (n !== 1 && !seen.has(n)) {
        seen.add(n);
        n = getNext(n);
    }

    return n === 1;
}

// Test cases for validation
console.log("Test Case 1: " + (isHappy(19) ? "true" : "false"));  // Expected: true
console.log("Test Case 2: " + (isHappy(2) ? "true" : "false"));   // Expected: false
