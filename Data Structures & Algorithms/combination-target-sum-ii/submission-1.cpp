
class Solution
{
public:
    set<vector<int>> s;

    void getAllcombin(vector<int> &arr,
                      int idx,
                      int tar,
                      vector<vector<int>> &ans,
                      vector<int> &combin)
    {
        int n = arr.size();

        // Base Case
        if (tar == 0)
        {
            if (s.find(combin) == s.end())
            {
                ans.push_back(combin);
                s.insert(combin);
            }

            return;
        }

        if (idx == n || tar < 0)
        {
            return;
        }

        /// Include current element
        combin.push_back(arr[idx]);

        getAllcombin(arr,
                     idx + 1,
                     tar - arr[idx],
                     ans,
                     combin);

        combin.pop_back();

        /// Exclude current element
        getAllcombin(arr,
                     idx + 1,
                     tar,
                     ans,
                     combin);
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates,
                                        int target)
    {
        vector<vector<int>> ans;
        vector<int> combin;

        sort(candidates.begin(), candidates.end());

        getAllcombin(candidates,
                     0,
                     target,
                     ans,
                     combin);

        return ans;
    }
};