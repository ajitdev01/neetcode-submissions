// class Solution {
// public:
//     int maxAscendingSum(vector<int>& nums) {
//         int res = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             int curSum = nums[i];
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[j] <= nums[j - 1]) {
//                     break;
//                 }
//                 curSum += nums[j];
//             }
//             res = max(res, curSum);
//         }
//         return res;
//     }
// };




class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0], ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            sum = (nums[i] > nums[i - 1])
                      ? sum + nums[i]
                      : nums[i];

            ans = max(ans, sum);
        }

        return ans;
    }
};
