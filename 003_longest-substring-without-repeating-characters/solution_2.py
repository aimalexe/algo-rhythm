
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        """
        Function to find the length of the longest substring without repeating characters.
        
        :param s: Input string
        :return: Length of the longest substring without repeating characters.
        """
        char_index_map = {}  # Dictionary to store the last seen index of each character.
        max_length = 0  # To store the maximum length of the substring.
        start = 0  # Left pointer of the sliding window.

        # Traverse through the string
        for end, char in enumerate(s):
            # If the character is already in the map and within the current window, update the start pointer.
            if char in char_index_map and char_index_map[char] >= start:
                start = char_index_map[char] + 1
            
            # Update the last seen index of the current character.
            char_index_map[char] = end
            
            # Calculate the maximum length of the substring.
            max_length = max(max_length, end - start + 1)
        
        return max_length

# Test cases to validate the solution.
def run_tests():
    test_cases = [
        {"input": "abcabcbb", "expected": 3},
        {"input": "bbbbb", "expected": 1},
        {"input": "pwwkew", "expected": 3},
        {"input": "", "expected": 0},
        {"input": "abcdef", "expected": 6}
    ]
    sol = Solution();

    for i, test in enumerate(test_cases):
        input_string = test["input"]
        expected = test["expected"]
        
        result = sol.lengthOfLongestSubstring(input_string)
        
        is_success = result == expected
        
        print(f"Test Case {i + 1}: {'Passed' if is_success else 'Failed'}")
        print(f"  Input: \"{input_string}\"")
        print(f"  Expected: {expected}, Got: {result}\n")

# Run the test cases
if __name__ == "__main__":
    run_tests()
