/**
 * Recursively checks if a string matches a pattern using regular expression rules.
 * @param {string} s - The input string.
 * @param {string} p - The pattern string.
 * @return {boolean} - True if the input string matches the pattern, otherwise false.
 */
function isMatch(s, p) {
    // Base case: when the pattern is empty, the string must be empty as well
    if (p.length === 0)
        return s.length === 0;

    // Check if the first character matches (consider '.' as a wildcard)
    let firstMatch = (s.length > 0 && (s[0] === p[0] || p[0] === '.'));

    // Handle '*' pattern
    if (p.length >= 2 && p[1] === '*')
        // Option 1: '*' matches zero occurrences
        // Option 2: '*' matches one or more occurrences if first character matches
        return isMatch(s, p.slice(2)) || (firstMatch && isMatch(s.slice(1), p));
    else
        // No '*', just proceed to check the next characters
        return firstMatch && isMatch(s.slice(1), p.slice(1));
}

// Test cases
console.log(isMatch("aa", "a"));          // Output: false
console.log(isMatch("aa", "a*"));         // Output: true
console.log(isMatch("ab", ".*"));         // Output: true
console.log(isMatch("aab", "c*a*b"));     // Output: true
console.log(isMatch("mississippi", "mis*is*p*."));  // Output: false
