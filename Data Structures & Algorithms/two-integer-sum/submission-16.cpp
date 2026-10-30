class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        mp.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            auto it = mp.find(need);

            if (it != mp.end()) {
                return {it->second, i};
            }

            mp.emplace(nums[i], i);
        }

        return {};
    }
};