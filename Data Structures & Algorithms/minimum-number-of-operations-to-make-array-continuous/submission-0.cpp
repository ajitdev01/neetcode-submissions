
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int m = nums.size();
        int ans = n;
        int j = 0;

        for (int i = 0; i < m; i++) {
            while (nums[i] - nums[j] >= n) {
                j++;
            }

            ans = min(ans, n - (i - j + 1));
        }

        return ans;
    }
};
