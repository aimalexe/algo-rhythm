/**
 * Checks if ransomNote can be constructed from the characters in magazine.
 * @param {string} ransomNote - the string representing the ransom note
 * @param {string} magazine - the string representing the magazine
 * @return {boolean} true if ransomNote can be constructed, false otherwise
 */
function canConstruct(ransomNote, magazine) {
    const freq = new Array(26).fill(0);

    // Populate the frequency array with characters from magazine
    for (let i = 0; i < magazine.length; i++) 
        freq[magazine.charCodeAt(i) - 97]++;

    // Check if ransomNote can be formed
    for (let i = 0; i < ransomNote.length; i++) {
        const index = ransomNote.charCodeAt(i) - 97;
        if (freq[index] === 0) 
            return false;
        freq[index]--; // Use the character from the magazine
    }

    return true;
}

// Test cases
console.log(canConstruct("a", "b"));        // Output: false
console.log(canConstruct("aa", "ab"));      // Output: false
console.log(canConstruct("aa", "aab"));     // Output: true
