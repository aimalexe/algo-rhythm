#include <iostream>
#include <climits>
#include <vector>

class Solution
{
public:
    /**
     * Reverse the digits of a 32-bit signed integer.
     * If the reversed integer goes out of bounds of a 32-bit integer, return 0.
     * @param x The integer to reverse.
     * @return The reversed integer or 0 if overflow occurs.
     */
    int reverse(int x)
    {
        int reversedNumber = 0;

        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;

            // Check for overflow/underflow before updating reversedNumber
            if (reversedNumber > INT_MAX / 10 || (reversedNumber == INT_MAX / 10 && pop > 7))
                return 0;
            if (reversedNumber < INT_MIN / 10 || (reversedNumber == INT_MIN / 10 && pop < -8))
                return 0;

            reversedNumber = reversedNumber * 10 + pop;
        }

        return reversedNumber;
    }
};

// Test cases
void testReverse()
{
    std::vector<std::pair<int, int>> testCases = {
        {123, 321},
        {-123, -321},
        {120, 21},
        {0, 0},
        {1534236469, 0} // This causes overflow, hence expected is 0
    };

    Solution sol;

    for (int i = 0; i < testCases.size(); i++)
    {
        int input = testCases[i].first;
        int expected = testCases[i].second;
        int result = sol.reverse(input);

        std::cout << "Test Case " << i + 1 << ": " << (result == expected ? "Passed ✅" : "Failed ❌") << std::endl;
        std::cout << "  Input: " << input << std::endl;
        std::cout << "  Expected: " << expected << ", Got: " << result << std::endl;
    }
}

int main()
{
    testReverse();
    return 0;
}
