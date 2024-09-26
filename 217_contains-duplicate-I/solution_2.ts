/**
 * Checks if the array contains any duplicate elements by sorting.
 * @param nums The input array of integers.
 * @return True if there are duplicates, otherwise false.
 */
function containsDuplicate(nums: number[]): boolean {
    nums.sort((a, b) => a - b); // Sort array
    for (let i = 1; i < nums.length; i++)
        if (nums[i] === nums[i - 1])
            return true; // Duplicate found
    return false; // No duplicates
}

// Test cases
console.log(containsDuplicate([1, 2, 3, 4, 5])); // Output: false
console.log(containsDuplicate([1, 2, 3, 1])); // Output: true
console.log(containsDuplicate([1, 1, 1, 1])); // Output: true
console.log(containsDuplicate([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])); // Output: false
