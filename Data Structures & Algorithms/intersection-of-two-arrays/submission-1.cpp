class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        ///// Burt Force Apprpoch O(n^2)
    //     unordered_set<int> ans;
    //     for (int val : nums1) {
    //         for (int n : nums2) {
    //             if (val == n) {
    //                 ans.insert(n);
    //             }
    //         }
    //     }
    //     return vector<int>(ans.begin(), ans.end());
    // }


    // Otimized   Apprpoch O(n^2)
    unordered_set<int> s(nums1.begin(), nums1.end());
    unordered_set<int> ans;

    for (int x : nums2) {
        if (s.count(x)) {
            ans.insert(x);
        }
    }
    return vector<int>(ans.begin(), ans.end());

}
};