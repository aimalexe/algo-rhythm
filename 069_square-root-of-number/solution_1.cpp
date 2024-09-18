#include <iostream>
using namespace std;

/**
 * A class that provides a method to calculate the square root of a number using binary search.
 */
class Solution {
public:
    /**
     * Function to calculate the square root of a given non-negative integer using binary search.
     * 
     * @param number - The non-negative integer whose square root needs to be found.
     * @return The integer part of the square root of number.
     */
    int mySqrt(int number) {
        if (number == 0 || number == 1) return number;  // Base cases
        
        // Call the binary search helper function
        return binarySearchSqrt(number);
    }

private:
    /**
     * Helper function to perform binary search for finding the integer square root.
     * 
     * @param value - The number whose square root we are calculating.
     * @return The integer square root of value.
     */
    int binarySearchSqrt(int value) {
        int left = 1, right = value, ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if mid*mid is equal to value
            if (mid == value / mid) {
                return mid;
            }
            // If mid*mid is less than value, move to the right half
            else if (mid < value / mid) {
                left = mid + 1;
                ans = mid;  // Update the answer to the largest found so far
            }
            // If mid*mid is greater than value, move to the left half
            else {
                right = mid - 1;
            }
        }

        return ans;  // Return the integer part of the square root
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    int testCases[] = {4, 8, 16, 25, 26, 52};
    int expected[] = {2, 2, 4, 5, 5, 7};

    for (int i = 0; i < size(testCases); i++) {
        int result = solution.mySqrt(testCases[i]);
        cout << "Test Case " << i + 1 << ": ";
        cout << "Input: " << testCases[i] << " | Expected: " << expected[i] << " | Got: " << result << endl;
    }
}

int main() {
    runTests();
    return 0;
}
