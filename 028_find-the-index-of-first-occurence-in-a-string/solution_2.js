/**
 * Finds the index of the first occurrence of needle in haystack.
 * 
 * @param {string} haystack - The string in which to search.
 * @param {string} needle - The substring to find.
 * @return {number} The index of the first occurrence of needle, or -1 if not found.
 */
const strStr = function(haystack, needle) {
    // if (needle === "" || needle.length > haystack.length) return -1;

    // for (let i = 0; i <= haystack.length - needle.length; i++) {
    //     if (haystack.substring(i, i + needle.length) === needle) {
    //         return i;
    //     }
    // }

    // return -1;
    return haystack.indexOf(needle);
};

// Test cases to validate the solution
const testCases = [
    { haystack: "sadbutsad", needle: "sad", expected: 0 },
    { haystack: "leetcode", needle: "leeto", expected: -1 },
    { haystack: "aimalkhan", needle: "alkh", expected: 3 },
    { haystack: "hello", needle: "ll", expected: 2 },
    { haystack: "aaaaa", needle: "bba", expected: -1 },
    { haystack: "", needle: "asdfghhj", expected: -1 },
    { haystack: "aaaaa", needle: "", expected: -1 },
];

testCases.forEach(({ haystack, needle, expected }, index) => {
    const startTime = performance.now();
    const result = strStr(haystack, needle);
    const endTime = performance.now();
    const isSuccess = result === expected;
    
    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed" : "Failed"}`);
    console.log(`  Haystack: "${haystack}", Needle: "${needle}"`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
