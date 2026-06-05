class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // // Linear Serach 
        int n = nums.size() , ans =0;
        for(int i = 0 ; i<n ; i++){
            ans ^= nums[i];
        }
        return ans;
    }
};