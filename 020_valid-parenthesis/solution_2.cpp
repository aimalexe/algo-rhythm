#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    /**
     * Checks if the input string of brackets is valid.
     * @param s - The string containing the brackets.
     * @return true if the string is valid, false otherwise.
     */
    bool isValid(const string &s)
    {
        stack<char> brackets;
        unordered_map<char, char> bracketMap = {{')', '('}, {'}', '{'}, {']', '['}};

        for (char ch : s)
        {
            auto it = bracketMap.find(ch);
            if (it != bracketMap.end())
            {
                // If it's a closing bracket and either the stack is empty or the top of the stack is not the matching opening bracket
                if (brackets.empty() || brackets.top() != it->second)
                    return false;
                brackets.pop(); // Pop the top of the stack since it's a match
            }
            else
                brackets.push(ch); // Push opening brackets onto the stack
        }

        // The string is valid if no unmatched brackets are left in the stack
        return brackets.empty();
    }
};

int main()
{
    Solution sol;
    // Test cases
    cout << boolalpha; // Print bool values as true or false
    cout << "Valid '()': " << sol.isValid("()") << endl;
    cout << "Valid '()[]{}': " << sol.isValid("()[]{}") << endl;
    cout << "Valid '(]': " << sol.isValid("(]") << endl;
    cout << "Valid '([)]': " << sol.isValid("([)]") << endl;
    cout << "Valid '{[]}': " << sol.isValid("{[]}") << endl;
    cout << "Valid '': " << sol.isValid("") << endl;

    return 0;
}
