/**
 * Function to find the majority element using a Hash Map.
 * @param {number[]} nums - array of numbers.
 * @return {number} - the majority element.
 */
function majorityElement(nums) {
    const freqMap = {};
    const majorityCount = Math.floor(nums.length / 2);

    for (let num of nums) {
        freqMap[num] = (freqMap[num] || 0) + 1;
        if (freqMap[num] > majorityCount) {
            return num;
        }
    }
}

// Test cases
console.log("Majority element in [3, 2, 3]:", majorityElement([3, 2, 3]));  // Output: 3
console.log("Majority element in [2, 2, 1, 1, 1, 2, 2]:", majorityElement([2, 2, 1, 1, 1, 2, 2]));  // Output: 2
