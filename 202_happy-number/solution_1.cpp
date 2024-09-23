#include <iostream>
#include <unordered_set>

using namespace std;

class Solution
{
private:
    /**
     * @brief Function to calculate the sum of squares of digits of a number
     *
     * @param n The input number
     * @return int Sum of squares of digits
     */
    int sumOfSquares(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

public:
    /**
     * @brief Function to determine if a number is a happy number
     *
     * @param n The input number
     * @return true If the number is happy
     * @return false If the number is not happy
     */
    bool isHappy(int n)
    {
        unordered_set<int> seenNumbers;
        while (n != 1 && seenNumbers.find(n) == seenNumbers.end())
        {
            seenNumbers.insert(n);
            n = sumOfSquares(n);
        }
        return n == 1;
    }
};

// Test cases for validation
int main()
{
    Solution sol;
    cout << "Test Case 1: 19 = " << (sol.isHappy(19) ? "true" : "false") << endl; // Expected: true
    cout << "Test Case 2: 02 = " << (sol.isHappy(2) ? "true" : "false") << endl;  // Expected: false
    return 0;
}
