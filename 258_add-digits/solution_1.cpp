#include <iostream>

using namespace std;

class Solution
{
public:
    /**
     * Function to add digits of an integer until the result has only one digit.
     * @param num: The input integer.
     * @return: The resulting single digit.
     */
    int addDigits(int num)
    {
        // Loop until the number is reduced to a single digit
        while (num >= 10)
        {
            int sum = 0;
            // Sum the digits of the current number
            while (num > 0)
            {
                sum += num % 10; // Add last digit to sum
                num /= 10;       // Remove last digit
            }
            num = sum; // Update num to the sum of its digits
        }
        return num; // Return the resulting single digit
    }
};

int main()
{
    Solution s;
    // Test cases to validate the solution
    cout << "Input: 38, Output: " << s.addDigits(38) << endl; // Expected output: 2
    cout << "Input: 0, Output: " << s.addDigits(0) << endl;   // Expected output: 0
    cout << "Input: 99, Output: " << s.addDigits(99) << endl; // Expected output: 9

    return 0;
}
