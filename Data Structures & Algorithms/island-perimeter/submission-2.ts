class Solution {
    islandPerimeter(grid: number[][]): number {
        let perimeter = 0;

        const rows = grid.length;
        const cols = grid[0].length;

        for (let i = 0; i < rows; i++) {
            for (let j = 0; j < cols; j++) {

                if (grid[i][j] === 0) {
                    continue;
                }

                // Every land cell has 4 sides
                perimeter += 4;

                // Shared side with top
                if (i > 0 && grid[i - 1][j] === 1) {
                    perimeter -= 2;
                }

                // Shared side with left
                if (j > 0 && grid[i][j - 1] === 1) {
                    perimeter -= 2;
                }
            }
        }

        return perimeter;
    }
}