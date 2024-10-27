#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    /**
     * Reverses the vowels of the input string using two-pointer technique.
     *
     * @param s A reference to the input string.
     * @return string The modified string with reversed vowels.
     */
    string reverseVowels(string s)
    {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            while (left < right && vowels.find(s[left]) == vowels.end())
                left++;

            while (left < right && vowels.find(s[right]) == vowels.end())
                right--;

            if (left < right)
                swap(s[left++], s[right--]);
                // left++;
                // right--;
        }
        return s;
    }
};

int main()
{
    Solution s;
    string test1 = "IceCreAm";
    cout << s.reverseVowels(test1) << endl; // Output: AceCreIm

    string test2 = "leetcode";
    cout << s.reverseVowels(test2) << endl; // Output: leotcede
}
