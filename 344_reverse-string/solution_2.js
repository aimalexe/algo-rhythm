/**
 * Recursively reverses the input string in-place.
 * 
 * @param {character[]} s - The input array of characters.
 * @param {number} left - The starting index for the current recursion.
 * @param {number} right - The ending index for the current recursion.
 * 
 * This function modifies the input array in-place.
 */
function reverseString(s, left = 0, right = s.length - 1) {
    if (left >= right) return; // Base case: Stop when pointers meet or cross
    [s[left], s[right]] = [s[right], s[left]]; // Swap elements
    reverseString(s, left + 1, right - 1); // Recur for the next set of elements
}

// Test cases
const testCases = [
    { input: ['h', 'e', 'l', 'l', 'o'], expected: ['o', 'l', 'l', 'e', 'h'] },
    { input: ['H', 'a', 'n', 'n', 'a', 'h'], expected: ['h', 'a', 'n', 'n', 'a', 'H'] },
];

// Running test cases
testCases.forEach(({ input, expected }, index) => {
    reverseString(input); // In-place modification
    const isSuccess = JSON.stringify(input) === JSON.stringify(expected);
    
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed" : "Failed"}`);
    console.log(`  Input: [${input.join(', ')}], Expected: [${expected.join(', ')}]`);
});
