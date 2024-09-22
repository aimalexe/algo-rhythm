#include <iostream>
#include <cstdint>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t result = 0;
        for (int i = 0; i < 32; ++i)
        {
            // Shift result to the left by 1 to make space for the next bit
            result <<= 1;
            // Add the last bit of n to result
            result |= (n & 1);
            // Shift n to the right by 1 to get the next bit
            n >>= 1;
        }
        return result;
    }
};

// Example usage:
int main() {
    Solution sol;
    uint32_t n1 = 43261596;
    uint32_t n2 = 4294967293;
    
    cout << "Reversed bits for " << n1 << " : " << sol.reverseBits(n1) << endl;
    cout << "Reversed bits for " << n2 << " : " << sol.reverseBits(n2) << endl;
    
    return 0;
}

