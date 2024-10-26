#include <vector>
#include <iostream>

class Solution
{
public:
    /**
     * @brief Count the number of 1's in the binary representation of numbers from 0 to n.
     *
     * @param n The integer n to calculate bit counts for numbers 0 to n.
     * @return std::vector<int> The vector of bit counts.
     */
    std::vector<int> countBits(int n)
    {
        // Create a vector to store the number of 1's for each number
        std::vector<int> result(n + 1, 0);

        // Use the relationship result[i] = result[i >> 1] + (i & 1)
        for (int i = 1; i <= n; ++i)
            result[i] = result[i >> 1] + (i & 1); // shift right by 1 and check the least significant bit

        return result;
    }
};

// Test cases
int main()
{
    Solution s;
    int n = 9;
    std::vector<int> ans = s.countBits(n);
    for (int bitCount : ans)
        std::cout << bitCount << " ";
    // Output: 0 1 1 2 1 2 2 3 1 2
}
