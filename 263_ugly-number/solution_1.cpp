#include <iostream>

using namespace std;

class Solution
{
public:
    /**
     * Function to determine if a number is an ugly number using iterative division.
     * @param n: The input integer.
     * @return: true if n is an ugly number, false otherwise.
     */
    bool isUgly(int n)
    {
        if (n <= 0)
            return false; // Ugly numbers must be positive integers

        // Divide n by 2, 3, and 5 until it can no longer be divided
        while (n % 2 == 0)
            n /= 2;
        while (n % 3 == 0)
            n /= 3;
        while (n % 5 == 0)
            n /= 5;

        return n == 1; // If the final result is 1, it is an ugly number
    }
};

int main()
{
    Solution s;
    // Test cases to validate the solution
    cout << "Input: 6, Output: " << (s.isUgly(6) ? "true" : "false") << endl;   // Expected output: true
    cout << "Input: 1, Output: " << (s.isUgly(1) ? "true" : "false") << endl;   // Expected output: true
    cout << "Input: 14, Output: " << (s.isUgly(14) ? "true" : "false") << endl; // Expected output: false

    return 0;
}
