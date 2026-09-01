class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int n = nums.size();
        // short ans =0;
        // for(int i =0; i<n ; i++){
        //     ans^= nums[i];
        // }
        // return ans;

        int ans = 0 ;
        for(short n : nums){
            ans ^= n;
        }
        return ans;
    }
};
