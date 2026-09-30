class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int perimeter = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {

                if (grid[r][c] == 1) {

                    for (int k = 0; k < 4; k++) {
                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        // Outside grid OR water
                        if (nr < 0 || nr >= rows ||
                            nc < 0 || nc >= cols ||
                            grid[nr][nc] == 0) {
                            perimeter++;
                        }
                    }
                }
            }
        }

        return perimeter;
    }
};