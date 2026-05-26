class Solution
{
public:
    void solve(vector<int>& arr,
               int idx,
               int target,
               vector<int>& temp,
               vector<vector<int>>& ans)
    {
        // Base Case
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if(target < 0)
        {
            return;
        }

        for(int i = idx; i < arr.size(); i++)
        {
            // Skip duplicates
            if(i > idx && arr[i] == arr[i - 1])
            {
                continue;
            }

            // Optimization
            if(arr[i] > target)
            {
                break;
            }

            temp.push_back(arr[i]);

            solve(arr,
                  i + 1,
                  target - arr[i],
                  temp,
                  ans);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                        int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(candidates.begin(), candidates.end());

        solve(candidates,
              0,
              target,
              temp,
              ans);

        return ans;
    }
};