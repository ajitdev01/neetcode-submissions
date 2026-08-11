class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();

        // {time, row, col}
        priority_queue<
            tuple<int, int, int>,
            vector<tuple<int, int, int>>,
            greater<tuple<int, int, int>>
        > pq;

        vector<vector<bool>> visited(n, vector<bool>(n, false));

        pq.push({grid[0][0], 0, 0});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while (!pq.empty()) {
            auto [time, r, c] = pq.top();
            pq.pop();

            if (visited[r][c])
                continue;

            visited[r][c] = true;

            // Reached destination
            if (r == n - 1 && c == n - 1)
                return time;

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < n && nc >= 0 && nc < n &&
                    !visited[nr][nc]) {

                    int newTime = max(time, grid[nr][nc]);

                    pq.push({newTime, nr, nc});
                }
            }
        }

        return -1;
    }
};