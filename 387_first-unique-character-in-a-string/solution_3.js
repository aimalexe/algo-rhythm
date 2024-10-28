/**
 * Finds the index of the first non-repeating character in a string.
 * @param {string} s - the input string consisting of lowercase English letters
 * @return {number} the index of the first unique character, or -1 if none exists
 */
function firstUniqChar(s) {
    for (let i = 0; i < s.length; i++) 
        if (s.indexOf(s[i]) === s.lastIndexOf(s[i])) 
            return i;
        
    return -1;  // If no unique character exists
}

// Test cases
console.log(firstUniqChar("leetcode"));        // Output: 0
console.log(firstUniqChar("loveleetcode"));    // Output: 2
console.log(firstUniqChar("aabb"));            // Output: -1
