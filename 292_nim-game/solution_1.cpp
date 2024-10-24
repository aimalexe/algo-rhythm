#include <iostream>

class Solution
{
public:
    /**
     * Function to determine if the player can win the Nim Game.
     * @param n: The number of stones in the heap.
     * @return True if the player can win, otherwise False.
     */
    bool canWinNim(int n)
    {
        return n % 4 != 0;
    }
};

// Test cases for C++ solution
int main()
{
    Solution s;
    std::cout << s.canWinNim(4) << std::endl; // False
    std::cout << s.canWinNim(1) << std::endl; // True
    std::cout << s.canWinNim(2) << std::endl; // True
    std::cout << s.canWinNim(5) << std::endl; // True
    return 0;
}
