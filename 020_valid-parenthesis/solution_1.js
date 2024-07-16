/**
 * Checks if the input string of brackets is valid.
 * @param {string} s - The string containing the brackets.
 * @return {boolean} - Returns true if the string is valid, false otherwise.
 */
function isValid(s) {
    const stack = [];
    const bracketMap = {
        ')': '(',
        '}': '{',
        ']': '['
    };

    for (let char of s) {
        if (char in bracketMap) {
            // Check if the top of the stack matches the corresponding opening bracket
            if (stack.pop() !== bracketMap[char]) {
                return false;
            }
        } else {
            // If it's an opening bracket, push it onto the stack
            stack.push(char);
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return stack.length === 0;
}

// Test cases
const testStrings = [
    { input: "()", expected: true },
    { input: "()[]{}", expected: true },
    { input: "(]", expected: false },
    { input: "([)]", expected: false },
    { input: "{[]}([{}])", expected: true },
    { input: "", expected: true }
];

testStrings.forEach(test => {
    const startTime = performance.now();
    const result = isValid(test.input);
    const endTime = performance.now();
    console.log(`Input: '${test.input}' - Expected: ${test.expected}, Got: ${result}, Time: ${(endTime - startTime).toFixed(4)} ms`);
});
