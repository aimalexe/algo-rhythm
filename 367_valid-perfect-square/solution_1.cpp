#include <iostream>
using namespace std;

class Solution
{
public:
    /**
     * Checks if the given number is a perfect square using binary search.
     *
     * @param num The input number to check.
     * @return true if num is a perfect square, false otherwise.
     */
    bool isPerfectSquare(int num)
    {
        if (num < 1)
            return false;

        long long left = 1, right = num;

        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            long long squared = mid * mid;

            if (squared == num)
                return true;
            else if (squared < num)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};

int main()
{
    Solution s;

    // Test case 1
    int num = 16;
    cout << s.isPerfectSquare(num) << endl; // Output: true

    // Test case 2
    num = 14;
    cout << s.isPerfectSquare(num) << endl; // Output: false

    // Test case 3
    num = 529;
    cout << s.isPerfectSquare(num) << endl; // Output: true

    return 0;
}
