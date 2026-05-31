class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> ans;

        for (int val : nums1) {
            for (int n : nums2) {
                if (val == n) {
                    ans.insert(n);
                }
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};