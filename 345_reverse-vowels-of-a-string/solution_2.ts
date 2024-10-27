/**
 * Reverses the vowels of the input string using a stack-based approach.
 * 
 * @param s A string to process.
 * @return The modified string with reversed vowels.
 */
function reverseVowels(s: string): string {
    const vowels = new Set(['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']);
    const vowelStack: string[] = [];

    // Collect all vowels in a stack
    for (let char of s)
        if (vowels.has(char))
            vowelStack.push(char);

    // Replace vowels from the stack
    let result = s.split('');
    for (let i = 0; i < result.length; i++)
        if (vowels.has(result[i]))
            result[i] = vowelStack.pop()!;

    return result.join('');
}

// Test cases
console.log(reverseVowels("IceCreAm")); // Output: AceCreIm
console.log(reverseVowels("leetcode")); // Output: leotcede
