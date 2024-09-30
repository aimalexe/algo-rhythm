/**
 * @brief Generates summary ranges from a sorted unique integer array.
 * 
 * @param {number[]} nums - A sorted unique integer array.
 * @return {string[]} - An array of strings representing the summary ranges.
 */
function summaryRanges(nums) {
    const result = [];
    const length = nums.length;

    if (length === 0) return result; // Return empty if input is empty

    let start = nums[0]; // Starting point of a range

    for (let i = 1; i <= length; i++)
        // Check if the current number is not continuous
        if (i === length || nums[i] !== nums[i - 1] + 1) {
            // If start is the same as current number, just add start
            if (start === nums[i - 1])
                result.push(start.toString());
            else
                result.push(`${start}->${nums[i - 1]}`);
            start = (i < length) ? nums[i] : 0; // Update start for next range
        }
    return result;
}

// Test cases
console.log(summaryRanges([0, 1, 2, 4, 5, 7])); // Expected output: ["0->2", "4->5", "7"]
console.log(summaryRanges([0, 2, 3, 4, 6, 8, 9])); // Expected output: ["0", "2->4", "6", "8->9"]
