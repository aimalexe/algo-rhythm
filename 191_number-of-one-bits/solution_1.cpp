#include <iostream>
#include <cstdint>

class Solution
{
public:
    /**
     * @brief Counts the number of 1-bits in the binary representation of a positive integer.
     *
     * @param n The input integer to count 1-bits.
     * @return int The number of 1-bits in the binary representation.
     */
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n != 0)
        {
            // Increment count if the last bit is 1
            count += n & 1;
            // Right shift the bits of n to check the next bit
            n >>= 1;
        }
        return count;
    }
};

// Test cases for validation
void runTests()
{
    Solution sol;
    uint32_t testCases[] = {11, 128, 2147483645, 0, 4294967295};
    int expectedResults[] = {3, 1, 30, 0, 32};

    for (int i = 0; i < 5; i++)
    {
        int result = sol.hammingWeight(testCases[i]);
        std::cout << "Test Case " << i + 1 << ": "
                  << (result == expectedResults[i] ? "Passed ✅" : "Failed ❌")
                  << std::endl;
    }
}

int main()
{
    runTests();
    return 0;
}
