class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:  # Edge case where no zigzag is required
            return s

        # Initialize rows as a list of empty strings
        rows = [''] * min(numRows, len(s))
        current_row, first_row = 0, 0
        going_down = False
        last_row = numRows - 1

        # Build the zigzag by distributing characters to rows
        for c in s:
            rows[current_row] += c
            if current_row == first_row or current_row == last_row:
                going_down = not going_down  # Change direction at the top and bottom
            current_row += 1 if going_down else -1

        # Join all rows to form the final result
        return ''.join(rows)

sol = Solution()
# Test cases
print(sol.convert("PAYPALISHIRING", 3))  # Output: PAHNAPLSIIGYIR
print(sol.convert("PAYPALISHIRING", 4))  # Output: PINALSIGYAHRPI
print(sol.convert("A", 1))  # Output: A
