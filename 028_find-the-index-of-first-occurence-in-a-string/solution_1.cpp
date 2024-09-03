#include <iostream>
#include <string>
#include <chrono>
#include <vector>

/**
 * Finds the index of the first occurrence of needle in haystack.
 * 
 * @param haystack - The string in which to search.
 * @param needle - The substring to find.
 * @return The index of the first occurrence of needle, or -1 if not found.
 */
class Solution {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
        if (needle.empty() || haystack.empty() || needle.size() > haystack.size()) return -1;

        for (size_t i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }

        return -1;
    }
};

// Function to run and validate test cases
void runTests() {
    Solution solution;

    // Test cases
    std::vector<std::tuple<std::string, std::string, int>> testCases = {
        { "sadbutsad", "sad", 0 },
        { "leetcode", "leeto", -1 },
        { "lee", "leetocd", -1 },
        { "hello", "ll", 2 },
        { "aaaaa", "bba", -1 },
        { "aimalkhan", "khan", 5 },
        { "", "khan", -1 },
        { "aimalkhan", "", -1 },
    };

    for (size_t i = 0; i < testCases.size(); ++i) {
        const std::string& haystack = std::get<0>(testCases[i]);
        const std::string& needle = std::get<1>(testCases[i]);
        int expected = std::get<2>(testCases[i]);

        auto start = std::chrono::high_resolution_clock::now();
        int result = solution.strStr(haystack, needle);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double, std::milli> elapsed = end - start;

        bool isSuccess = result == expected;

        std::cout << "Test Case " << i + 1 << ": " << (isSuccess ? "Passed" : "Failed") << "\n";
        std::cout << "  Haystack: \"" << haystack << "\", Needle: \"" << needle << "\"\n";
        std::cout << "  Expected: " << expected << ", Got: " << result << "\n";
        std::cout << "  Execution Time: " << elapsed.count() << " ms\n\n";
    }
}

int main() {
    runTests();
    return 0;
}
