
class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        """
        Function to generate the first numRows of Pascal's Triangle.
        
        :param numRows: The number of rows to generate.
        :return: The Pascal's Triangle up to numRows.
        """
        triangle = []
        
        for i in range(numRows):
            row = [1] * (i + 1)  # Initialize row with 1s
            # Fill in the values inside the row
            for j in range(1, i):
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j]
            triangle.append(row)
        
        return triangle


# Example usage
sol = Solution()
numRows = 5
result = sol.generate(numRows)

# Display Pascal's Triangle
for row in result:
    print(row)
