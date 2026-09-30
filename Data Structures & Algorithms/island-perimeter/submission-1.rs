impl Solution {
    pub fn island_perimeter(grid: Vec<Vec<i32>>) -> i32 {
        let rows = grid.len();
        let cols = grid[0].len();
        let mut perimeter = 0;

        for i in 0..rows {
            for j in 0..cols {
                if grid[i][j] == 0 {
                    continue;
                }

                // Every land cell has 4 sides
                perimeter += 4;

                // Shared side with top
                if i > 0 && grid[i - 1][j] == 1 {
                    perimeter -= 2;
                }

                // Shared side with left
                if j > 0 && grid[i][j - 1] == 1 {
                    perimeter -= 2;
                }
            }
        }

        perimeter
    }
}