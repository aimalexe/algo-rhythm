#include <iostream>
#include <vector>

class Solution
{
public:
    /**
     * Reverses the input string in-place using the two-pointer approach.
     *
     * @param s A reference to the vector of characters to reverse.
     *          The function modifies the input vector in-place.
     */
    void reverseString(std::vector<char> &s)
    {
        int left = 0;
        int right = s.size() - 1;

        // Swap elements from both ends moving towards the center
        while (left < right)
        {
            std::swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main()
{
    Solution s;
    // Test case 1
    std::vector<char> test1 = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(test1);
    for (char c : test1)
        std::cout << c << " "; // Output: o l l e h
    std::cout << std::endl;

    // Test case 2
    std::vector<char> test2 = {'H', 'a', 'n', 'n', 'a', 'h'};
    s.reverseString(test2);
    for (char c : test2)
        std::cout << c << " "; // Output: h a n n a H
    std::cout << std::endl;

    return 0;
}
