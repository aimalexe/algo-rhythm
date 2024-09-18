#include <iostream>
#include <string>
using namespace std;

/**
 * Function to add two binary strings using bitwise manipulation.
 *
 * @param operandA - Binary string operandA.
 * @param operandB - Binary string operandB.
 * @return The binary string representing the sum of operandA and operandB.
 */
class Solution
{
public:
    string addBinary(string operandA, string operandB)
    {
        // Convert binary strings to integers
        long num1 = 0, num2 = 0;
        for (char c : operandA)
            num1 = (num1 << 1) | (c - '0');

        for (char c : operandB)
            num2 = (num2 << 1) | (c - '0');

        // Sum the integers
        long sum = num1 + num2;

        // Convert the result back to binary string
        string result = "";
        if (sum == 0)
            return "0";
        while (sum > 0)
        {
            result = char((sum & 1) + '0') + result;
            sum >>= 1;
        }

        return result;
    }
};

// Function to run test cases
int main()
{
    Solution solution;

    // Test case 1
    string a = "11";
    string b = "1";
    cout << "Test 1 - Expected: 100, Got: " << solution.addBinary(a, b) << endl;

    // Test case 2
    a = "1010";
    b = "1011";
    cout << "Test 2 - Expected: 10101, Got: " << solution.addBinary(a, b) << endl;

    // Test case 3
    a = "11";
    b = "101";
    cout << "Test 3 - Expected: 1000, Got: " << solution.addBinary(a, b) << endl;

    // Test case 4
    a = "110";
    b = "1001";
    cout << "Test 4 - Expected: 1111, Got: " << solution.addBinary(a, b) << endl;

    return 0;
}
