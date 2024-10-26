#include <iostream>

class Solution
{
public:
    /**
     * @brief Determines if the given number is a power of three.
     *
     * @param n The integer input to check.
     * @return true If n is a power of three.
     * @return false Otherwise.
     */
    bool isPowerOfThree(int n)
    {
        // Check for base case where n is less than or equal to 0
        if (n <= 0)
            return false;

        // Iterate and divide n by 3 while it's divisible by 3
        while (n % 3 == 0)
            n /= 3;

        // If n becomes 1, it was a power of three
        return n == 1;
    }
};

// Test cases
int main()
{
    Solution s;
    std::cout << s.isPowerOfThree(27) << std::endl; // Output: 1 (true)
    std::cout << s.isPowerOfThree(0) << std::endl;  // Output: 0 (false)
    std::cout << s.isPowerOfThree(-1) << std::endl; // Output: 0 (false)
    std::cout << s.isPowerOfThree(9) << std::endl;  // Output: 1 (true)
}
