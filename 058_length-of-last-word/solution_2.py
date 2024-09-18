class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # Strip any trailing spaces and split the string by spaces
        words = s.strip().split()
        
        # Return the length of the last word in the list
        return len(words[-1])

# Function to run and validate test cases
def runTests():
    solution = Solution()

    # Test cases from the prompt
    test_cases = [
        "Hello World",
        "   fly me   to   the moon  ",
        "luffy is still joyboy",
        "justOneWord",
        "trailing spaces     ",
        "    leading and trailing spaces    "
    ]
    expected_results = [5, 4, 6, 11, 6, 6]

    for i, case in enumerate(test_cases):
        result = solution.lengthOfLastWord(case)
        print(f"Test Case {i + 1}: {'Passed' if result == expected_results[i] else 'Failed'}")
        print(f"  Input: \"{case}\"")
        print(f"  Expected: {expected_results[i]}, Got: {result}\n")


if __name__ == "__main__":
    runTests()
