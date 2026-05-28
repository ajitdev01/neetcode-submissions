class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int n = nums.size();
        // for(int i = 0; i<n ; i++){
        //     for(int j =i+1;j<n ; j++){
        //         if(nums[i] == nums[j]){
        //            if( abs(i-j) <=k){
        //             return true;
        //            }
        //         }
        //     }
        // }
        // return false;


        //// Otimized
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++) {

            if(mp.count(nums[i])) {

                if(i - mp[nums[i]] <= k) {
                    return true;
                }
            }

            mp[nums[i]] = i;
        }
        return false;
    }
};