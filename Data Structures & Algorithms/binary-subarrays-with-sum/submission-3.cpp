
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int prefix = 0, ans = 0;
        vector<int> freq(nums.size() + 1, 0);
        freq[0] = 1;

        for (int num : nums) {
            prefix += num;

            if (prefix >= goal) {
                ans += freq[prefix - goal];
            }

            freq[prefix]++;
        }

        return ans;
    }
};
