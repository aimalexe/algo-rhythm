/**
 * This function finds the longest common prefix among an array of strings.
 * It iterates over each string and compares character by character to determine the shortest matching prefix.
 * 
 * @param {string[]} strings - An array of strings to find the common prefix.
 * @return {string} - The longest common prefix, or an empty string if there is no common prefix.
 */
const longestCommonPrefix = (strings) => {
    let stringsLength = strings.length;
    
    if (stringsLength === 0) return ""; // If there are no strings, return an empty string.

    // Initialize the prefix and prefix length as the length of the first string.
    let prefix = strings[0];
    let prefixLength = prefix.length;

    // Iterate through each string in the array, starting from the second string.
    for (let index = 1; index < stringsLength; index++) {
        const currentString = strings[index];

        // Update the prefix length to be the minimum between the current prefix length and the length of the current string.
        prefixLength = Math.min(prefixLength, currentString.length);

        // Compare characters up to the current prefix length.
        for (let charIndex = 0; charIndex < prefixLength; charIndex++)
            if (prefix[charIndex] !== currentString[charIndex]) {
                // As soon as a mismatch is found, reduce the prefix length to the current character index.
                prefixLength = charIndex;
                break; // Break out of the loop since the common prefix ends here.
            }

        // If the prefix length is reduced to zero during comparison, immediately return an empty string.
        if (prefixLength === 0) return "";
    }

    // Return the longest common prefix using the substring of the first string up to the determined prefix length.
    return prefix.substring(0, prefixLength);
}

// Test cases
console.time("Prefix Calculation Time");
const strs1 = ["flower", "flow", "flight"];
console.log("🚀 ~ longestCommonPrefix:", longestCommonPrefix(strs1));

const strs2 = ["dog", "racecar", "car"];
console.log("🚀 ~ longestCommonPrefix:", longestCommonPrefix(strs2));
console.timeEnd("Prefix Calculation Time");
