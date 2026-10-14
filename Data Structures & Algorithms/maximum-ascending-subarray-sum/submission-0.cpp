class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int curSum = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] <= nums[j - 1]) {
                    break;
                }
                curSum += nums[j];
            }
            res = max(res, curSum);
        }
        return res;
    }
};