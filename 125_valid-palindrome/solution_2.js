/**
 * Function to check if a string is a palindrome.
 * @param {string} s - The input string.
 * @return {boolean} - True if the string is a palindrome, false otherwise.
 */
function isPalindrome(s) {
    let left = 0;
    let right = s.length - 1;
    
    while (left < right) {
        // Move left index forward if not alphanumeric
        while (left < right && !isAlphanumeric(s[left]))
            left++;

        // Move right index backward if not alphanumeric
        while (left < right && !isAlphanumeric(s[right]))
            right--;
        
        // Compare characters in lowercase
        if (s[left].toLowerCase() !== s[right].toLowerCase())
            return false;
        
        left++;
        right--;
    }
    
    return true;
}

/**
 * Helper function to check if a character is alphanumeric.
 * @param {char} c - The character to check.
 * @return {boolean} - True if alphanumeric, false otherwise.
 */
function isAlphanumeric(c) {
    return /^[a-z0-9]+$/i.test(c);
}

// Test cases
console.log(isPalindrome("A man, a plan, a canal: Panama")); // true
console.log(isPalindrome("race a car")); // false
console.log(isPalindrome(" ")); // true
