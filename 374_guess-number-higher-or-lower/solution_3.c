#include <stdio.h>

// Mock guess API (this is provided by the problem)
int pick = 6;  // For testing purposes, assume the picked number is 6

int guess(int num) {
    if (num > pick) return -1;
    if (num < pick) return 1;
    return 0;
}

/**
 * Performs a linear search to guess the number.
 * 
 * @param n The upper bound of the guessing range.
 * @return The picked number.
 */
int guessNumber(int n) {
    for (int i = 1; i <= n; i++) 
        if (guess(i) == 0) 
            return i;  // Found the correct number

    return -1;  // This should never happen
}

int main() {
    int n = 10;
    printf("Picked number: %d\n", guessNumber(n));  // Output: 6
    return 0;
}
