class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        // unordered_set<int> set1(nums1.begin(), nums1.end());
        // unordered_set<int> set2(nums2.begin(), nums2.end());
        
        // vector<int> diff1, diff2;
        // for (int num : set1) {
        //     if (set2.find(num) == set2.end()) {
        //         diff1.push_back(num);
        //     }
        // }

        // for (int num : set2) {
        //     if (set1.find(num) == set1.end()) {
        //         diff2.push_back(num);
        //     }
        // }

        // return {diff1, diff2};

         vector<vector<int>> solution(2);
        bitset<2001> nums1bits;
        bitset<2001> nums2bits;
        for (int i = 0; i < nums1.size(); i++) {
            nums1bits.set(nums1[i] + 1000);
        } 
        for (int i = 0; i < nums2.size(); i++) {
            nums2bits.set(nums2[i] + 1000);
        }
        bitset<2001> numsexclusive;
        numsexclusive = nums1bits ^ nums2bits;
        for (int i = 0; i < numsexclusive.size(); i++) {
            if (numsexclusive.test(i)) {

                if (nums1bits.test(i)) {
                    solution[0].push_back(i - 1000);
                } else {
                    solution[1].push_back(i - 1000);
            }}
        }
        return solution;
    }
};
