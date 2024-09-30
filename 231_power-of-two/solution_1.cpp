#include <iostream>

class Solution
{
public:
    /**
     * @brief Determines if an integer n is a power of two using iterative division.
     *
     * @param n An integer to check.
     * @return true if n is a power of two, false otherwise.
     */
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false; // Only positive numbers can be powers of two

        while (n % 2 == 0)
            n /= 2; // Divide by 2 until n is odd

        return n == 1; // If n is reduced to 1, it's a power of two
    }
};

// Test cases
int main()
{
    Solution s;
    std::cout << std::boolalpha;                // Print boolean as true/false
    std::cout << s.isPowerOfTwo(1) << std::endl;  // Expected output: true
    std::cout << s.isPowerOfTwo(16) << std::endl; // Expected output: true
    std::cout << s.isPowerOfTwo(3) << std::endl;  // Expected output: false
    return 0;
}
