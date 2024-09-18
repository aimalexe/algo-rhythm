class Solution:

    def addBinary(self, binary_num1: str, binary_num2: str) -> str:
        result = []
        carry = 0
        i, j = len(binary_num1) - 1, len(binary_num2) - 1
        
        # Process each bit from the least significant to the most significant
        while i >= 0 or j >= 0 or carry:
            sum_ = carry
            if i >= 0:
                sum_ += int(binary_num1[i])
                i -= 1

            if j >= 0:
                sum_ += int(binary_num2[j])
                j -= 1

            # Append the current bit result to the final string
            result.append(str(sum_ % 2))
            carry = sum_ // 2
        
        # Reverse the list and join to form the binary string
        return ''.join(reversed(result))


# Function to run test cases

if __name__ == "__main__":
    solution = Solution()

    # Test case 1
    a = "11"
    b = "1"
    print(f"Test 1 - Expected: 100, Got: {solution.addBinary(a, b)}")

    # Test case 2
    a = "1010"
    b = "1011"
    print(f"Test 2 - Expected: 10101, Got: {solution.addBinary(a, b)}")
    
    # Test case 3
    a = "11";
    b = "101";
    print(f"Test 3 - Expected: 1000, Got: {solution.addBinary(a, b)}")
    
    # Test case 4
    a = "110";
    b = "1001";
    print(f"Test 4 - Expected: 1111, Got: {solution.addBinary(a, b)}")