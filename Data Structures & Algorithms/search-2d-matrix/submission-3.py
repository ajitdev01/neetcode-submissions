# Binary Search in 2D Array

class Solution:

    def SearchInRow(self, matrix, target, row):   # O(log n)

        n = len(matrix[0])

        st = 0
        end = n - 1

        while st <= end:

            mid = st + (end - st) // 2

            if target == matrix[row][mid]:
                return True

            elif target > matrix[row][mid]:
                st = mid + 1

            else:
                end = mid - 1

        return False

    def searchMatrix(self, matrix, target):   # O(log m)

        # Binary Search on rows
        m = len(matrix)
        n = len(matrix[0])

        startRow = 0
        endRow = m - 1

        while startRow <= endRow:

            midRow = startRow + (endRow - startRow) // 2

            # target lies in this row
            if target >= matrix[midRow][0] and target <= matrix[midRow][n - 1]:

                # Search inside row
                return self.SearchInRow(matrix, target, midRow)

            elif target > matrix[midRow][n - 1]:

                # move downward
                startRow = midRow + 1

            else:

                # move upward
                endRow = midRow - 1

        return False