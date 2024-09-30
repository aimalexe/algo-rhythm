#include <stdio.h>

/**
 * @brief Determines if an integer n is a power of two using bit shifting.
 * 
 * @param n An integer to check.
 * @return 1 if n is a power of two, 0 otherwise.
 */
int isPowerOfTwo(int n) {
    if (n <= 0) return 0; // Only positive numbers can be powers of two

    // Check if n is a power of two by comparing it with 1 shifted left (i.e., multiplied by 2)
    while (n > 1) {
        if (n & 1) return 0; // If the last bit is 1, it's not a power of two
        n >>= 1; // Right shift by 1 (divide by 2)
    }
    
    return 1; // If n is reduced to 1, it's a power of two
}

// Test cases
int main() {
    printf("%d\n", isPowerOfTwo(1));  // Expected output: 1 (true)
    printf("%d\n", isPowerOfTwo(16)); // Expected output: 1 (true)
    printf("%d\n", isPowerOfTwo(3));  // Expected output: 0 (false)
    printf("%d\n", isPowerOfTwo(0));  // Expected output: 0 (false)
    printf("%d\n", isPowerOfTwo(-8)); // Expected output: 0 (false)
    
    return 0;
}
