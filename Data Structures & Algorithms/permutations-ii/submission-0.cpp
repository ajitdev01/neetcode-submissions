
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        sort(nums.begin(), nums.end());

        backtrack(nums, used, curr, ans);

        return ans;
    }

private:
    void backtrack(vector<int>& nums, vector<bool>& used,
                   vector<int>& curr, vector<vector<int>>& ans) {
        if (curr.size() == nums.size()) {
            ans.push_back(curr);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            curr.push_back(nums[i]);

            backtrack(nums, used, curr, ans);

            curr.pop_back();
            used[i] = false;
        }
    }
};
