#include <iostream>
using namespace std;

// Mock guess API (this is provided by the problem)
int pick = 6; // For testing purposes, assume the picked number is 6

int guess(int num)
{
    if (num > pick)
        return -1;
    if (num < pick)
        return 1;
    return 0;
}

class Solution
{
public:
    /**
     * Performs a binary search to find the guessed number.
     *
     * @param n The upper bound of the guessing range.
     * @return The picked number.
     */
    int guessNumber(int n)
    {
        int left = 1, right = n;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int result = guess(mid);

            if (result == 0)
                return mid; // Correct guess
            else if (result == -1)
                right = mid - 1; // Guess is higher, move left
            else
                left = mid + 1; // Guess is lower, move right
        }

        return -1; // This should never happen
    }
};

int main()
{
    Solution s;
    int n = 10;
    cout << "Picked number: " << s.guessNumber(n) << endl; // Output: 6
    return 0;
}
