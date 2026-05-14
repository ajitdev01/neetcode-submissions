class Solution {

    public boolean SearchInRow(int[][] matrix, int target, int row) {

        int n = matrix[0].length;

        int st = 0;
        int end = n - 1;

        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (target == matrix[row][mid]) {
                return true;
            }
            else if (target > matrix[row][mid]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }

    public boolean searchMatrix(int[][] matrix, int target) {

        // Binary Search on rows

        int m = matrix.length;
        int n = matrix[0].length;

        int startRow = 0;
        int endRow = m - 1;

        while (startRow <= endRow) {

            int midRow = startRow + (endRow - startRow) / 2;

            // target lies in this row
            if (target >= matrix[midRow][0] &&
                target <= matrix[midRow][n - 1]) {

                // Search inside row
                return SearchInRow(matrix, target, midRow);
            }

            else if (target > matrix[midRow][n - 1]) {

                // move downward
                startRow = midRow + 1;
            }

            else {

                // move upward
                endRow = midRow - 1;
            }
        }

        return false;
    }
}