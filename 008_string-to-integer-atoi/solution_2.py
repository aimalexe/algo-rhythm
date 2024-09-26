class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()  # Step 1: Remove leading whitespace
        if not s:
            return 0
        
        sign = 1  # Default sign is positive
        result = 0
        i = 0
        n = len(s)
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31

        # Step 2: Handle the optional sign
        if s[i] == '-' or s[i] == '+':
            sign = -1 if s[i] == '-' else 1
            i += 1

        # Step 3: Convert the digits to integer
        while i < n and s[i].isdigit():
            result = result * 10 + int(s[i])
            
            # Step 4: Handle overflow and underflow
            if sign == 1 and result > INT_MAX:
                return INT_MIN
            if sign == -1 and -result > INT_MIN:
                return INT_MIN
            
            i += 1

        return sign * result


# Test cases
test_cases = [
    ("42", 42),
    ("   -42", -42),
    ("4193 with words", 4193),
    ("words and 987", 0),
    ("-91283472332", -2147483648)
]

# Running the test cases
solution = Solution()
for index, (input_str, expected) in enumerate(test_cases):
    result = solution.myAtoi(input_str)
    print(f"Test Case {index + 1}: {'Passed' if result == expected else 'Failed'}")
    print(f"  Input: '{input_str}'")
    print(f"  Expected: {expected}, Got: {result}")
