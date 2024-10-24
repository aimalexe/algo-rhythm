/**
 * Function to check if the string s follows the pattern.
 * @param {string} pattern - A string pattern containing only lowercase letters.
 * @param {string} s - A string containing words separated by spaces.
 * @return {boolean} - Returns true if the pattern matches the word sequence, otherwise false.
 */
function wordPattern(pattern, s) {
    const charToWord = new Map();
    const wordToChar = new Map();
    const words = s.split(' ');

    // If the length of pattern and words do not match, return false
    if (pattern.length !== words.length) return false;

    for (let i = 0; i < pattern.length; i++) {
        const char = pattern[i];
        const word = words[i];

        // Check if the current character has been mapped to a word
        if (charToWord.has(char)) {
            if (charToWord.get(char) !== word)
                return false;
        } else
            charToWord.set(char, word);

        // Check if the current word has been mapped to a character
        if (wordToChar.has(word)) {
            if (wordToChar.get(word) !== char)
                return false;
        } else
            wordToChar.set(word, char);
    }
    
    return true;
}

// Test cases for JavaScript solution
console.log(wordPattern("abba", "dog cat cat dog"));  // True
console.log(wordPattern("abba", "dog cat cat fish")); // False
console.log(wordPattern("aaaa", "dog cat cat dog"));  // False
