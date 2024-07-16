# Problem 9: Palindrome Number

### Problem Link
[https://leetcode.com/problems/palindrome-number/description/](https://leetcode.com/problems/palindrome-number/description/)

### Difficulty Level
Easy

### Key Concepts/Tags
- Math
- Number Manipulation

## Problem Statement
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward. Negative numbers are not considered palindromes due to the negative sign.

## Solution Explanation
The solution involves reversing the second half of the number and comparing it with the first half. If the two halves are equal, then the number is a palindrome. Special cases, such as negative numbers and numbers ending in zero (but not zero itself), are immediately determined not to be palindromes.

### Approach
1. **Initial Check**: If the number is negative or ends in zero (and isn't zero), return `false`.
2. **Reversing Half of the Number**:
   - Continuously strip the last digit off the number and add it to the reversed half.
   - Stop when the original number is less than or equal to the reversed half (indicating that we've processed at least half of the digits).
3. **Palindrome Check**:
   - For numbers with an even number of digits, the original part and the reversed half should be equal.
   - For numbers with an odd number of digits, the middle digit doesn't affect the palindrome nature (since it's in the center), so we compare the original number and the reversed half ignoring the last digit of the reversed half.

## Code
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        long long int reversedHalf = 0, copy = x;

        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + copy % 10;
            copy /= 10;
        }

        // Check for even and odd digit numbers
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
```

## Complexity Analysis
- **Time Complexity**: O(log n), where n is the value of the integer. The number of operations is proportional to the number of digits in the number.
- **Space Complexity**: O(1), as we only use a few extra variables for the computations.