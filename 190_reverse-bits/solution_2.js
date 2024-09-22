var reverseBits = function (n) {
    let result = 0;
    for (let i = 0; i < 32; i++) {
        result = (result << 1) | (n & 1); // Append the least significant bit of n to result
        n = n >>> 1; // Shift n to the right (unsigned)
    }
    return result >>> 0; // Ensure unsigned 32-bit result
};

// Test cases
console.log(reverseBits(43261596)); // Output: 964176192
console.log(reverseBits(4294967293)); // Output: 3221225471
