#include <iostream>

class Solution
{
public:
    /**
     * @brief Determines if a given number is a power of four.
     *
     * This solution checks if the number is positive, a power of two, and ensures that the only
     * bit set is in an even position (because powers of four have a single 1 bit at even positions).
     *
     * @param n The number to check.
     * @return true If the number is a power of four, false otherwise.
     */
    bool isPowerOfFour(int n)
    {
        // Check if n is positive, n is a power of two (only one bit set), and that bit is in an even position.
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xAAAAAAAA) == 0;
    }
};

int main()
{
    Solution s;
    std::cout << s.isPowerOfFour(16) << std::endl; // Output: true
    std::cout << s.isPowerOfFour(5) << std::endl;  // Output: false
    std::cout << s.isPowerOfFour(1) << std::endl;  // Output: true
    std::cout << s.isPowerOfFour(64) << std::endl;  // Output: true
}
