class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int> ans;
        unordered_set<int> s;

        int n = grid.size();

        int repeated = -1;
        int missing = -1;

        int actualSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                actualSum += grid[i][j];

                if (s.find(grid[i][j]) != s.end())
                {
                    repeated = grid[i][j];
                }

                s.insert(grid[i][j]);
            }
        }

        int total = n * n;
        int expectedSum = total * (total + 1) / 2;

        missing = expectedSum + repeated - actualSum;

        return {repeated, missing};}
};