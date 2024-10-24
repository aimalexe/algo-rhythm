#include <iostream>

/**
 * Mock function for isBadVersion API.
 * In a real scenario, this function will be provided.
 * @param version: The version number to check.
 * @return True if the version is bad, otherwise False.
 */
bool isBadVersion(int version); // Assume this API is given

class Solution
{
public:
    /**
     * Function to find the first bad version using binary search.
     * @param n: The total number of versions.
     * @return The first bad version.
     */
    int firstBadVersion(int n)
    {
        int left = 1;
        int right = n;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid))
                right = mid; // Bad version is on the left side (including mid)
            else
                left = mid + 1; // Bad version is on the right side (excluding mid)
        }

        return left; // left will be the first bad version
    }
};

// Test cases for C++ solution
void runTests()
{
    Solution s;
    int n = 5;
    int expected = 4;
    int result = s.firstBadVersion(n);

    std::cout << "Test Case 1: ";
    if (result == expected)
        std::cout << "Passed\n";
    else
        std::cout << "Failed (Expected " << expected << ", Got " << result << ")\n";
}

int main()
{
    runTests();
    return 0;
}
