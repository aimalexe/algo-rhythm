#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

/**
 * Function to check if the character is alphanumeric.
 * @param c: The character to check.
 * @return true if alphanumeric, false otherwise.
 */
bool isAlphanumeric(char c)
{
    return (isalnum(c));
}

/**
 * Function to check if a string is a palindrome.
 * @param s: The input string.
 * @return true if the string is a palindrome, false otherwise.
 */
bool isPalindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        // Ignore non-alphanumeric characters
        while (left < right && !isAlphanumeric(s[left]))
            left++;

        while (left < right && !isAlphanumeric(s[right]))
            right--;

        // Compare characters in lowercase
        if (tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }
    return true;
}

int main()
{
    char s[] = "A man, a plan, a canal: Panama";
    if (isPalindrome(s))
        printf("True\n");
    else
        printf("False\n");

    char s2[] = "race a car";
    if (isPalindrome(s2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
