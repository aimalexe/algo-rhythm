/**
 * Manacher's Algorithm to find the longest palindromic substring in a given string.
 * Time complexity: O(n), where n is the length of the input string.
 * @param {string} s - The input string.
 * @return {string} - The longest palindromic substring.
 */
function longestPalindromeManacher(s) {
    if (s.length === 0) return "";

    // Preprocess the string to handle even-length palindromes by adding '#' between characters
    const t = `#${s.split('').join('#')}#`;

    const n = t.length;
    const p = Array(n).fill(0); // Array to store the radius of palindromes centered at each index
    let c = 0; // Center of the current palindrome
    let r = 0; // Right edge of the current palindrome

    let maxLength = 0; // Length of the longest palindrome
    let centerIndex = 0; // Center index of the longest palindrome

    for (let i = 0; i < n; i++) {
        // Mirror index of i with respect to center c
        const mirror = 2 * c - i;

        // If i is within the right edge r, initialize p[i] to the minimum of p[mirror] and the distance to r
        if (i < r) {
            p[i] = Math.min(r - i, p[mirror]);
        }

        // Try expanding the palindrome centered at i
        while (i + p[i] + 1 < n && i - p[i] - 1 >= 0 && t[i + p[i] + 1] === t[i - p[i] - 1]) {
            p[i]++;
        }

        // If the palindrome centered at i expands past r, adjust center c and right edge r
        if (i + p[i] > r) {
            c = i;
            r = i + p[i];
        }

        // Update the longest palindrome found
        if (p[i] > maxLength) {
            maxLength = p[i];
            centerIndex = i;
        }
    }

    // Extract the longest palindrome from the preprocessed string
    const start = (centerIndex - maxLength) / 2;
    return s.substring(start, start + maxLength);
}

// Test cases
console.log(longestPalindromeManacher("babad")); // Output: "bab" or "aba"
console.log(longestPalindromeManacher("cbbd"));  // Output: "bb"
