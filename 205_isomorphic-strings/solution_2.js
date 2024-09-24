/**
 * Determines if two strings are isomorphic.
 * @param {string} s The first string.
 * @param {string} t The second string.
 * @returns {boolean} True if the two strings are isomorphic, false otherwise.
 */
function isIsomorphic(s, t) {
    if (s.length !== t.length) return false;

    const mapST = new Map(); //map from s to t
    const mapTS = new Map(); //map from t to s

    for (let i = 0; i < s.length; i++) {
        const ch1 = s[i], ch2 = t[i];

        if (mapST.has(ch1) && mapST.get(ch1) !== ch2) {
            return false; // Inconsistent mapping in s -> t
        }
        if (mapTS.has(ch2) && mapTS.get(ch2) !== ch1) {
            return false; // Inconsistent mapping in t -> s
        }

        mapST.set(ch1, ch2);
        mapTS.set(ch2, ch1);
    }

    return true;
}

// Test cases to validate the solution
const testCases = [
    { input: { s: "egg", t: "add" }, expected: true },
    { input: { s: "foo", t: "bar" }, expected: false },
    { input: { s: "paper", t: "title" }, expected: true },
    { input: { s: "abc", t: "def" }, expected: true },
    { input: { s: "ab", t: "aa" }, expected: false }
];

// Function to run test cases and log the results
testCases.forEach(({ input, expected }, index) => {
    const startTime = performance.now();
    const result = isIsomorphic(input.s, input.t);
    const endTime = performance.now();
    const isSuccess = result === expected;

    console.log(`Test Case ${index + 1}: ${isSuccess ? "Passed ✅" : "Failed ❌"}`);
    console.log(`  Input: {s: "${input.s}", t: "${input.t}"}`);
    console.log(`  Expected: ${expected}, Got: ${result}`);
    console.log(`  Execution Time: ${(endTime - startTime).toFixed(4)} ms\n`);
});
