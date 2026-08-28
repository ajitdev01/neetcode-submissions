class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ///// Burt Force Approch
        // int n = nums.size();
        // for(int i =0; i<n ; i++){
        //     for(int j = i+1 ; j<n ; j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};


        /// Otimized Approch
        int n = nums.size();
        int st = 0 , end = n-1;
        while(st<end){
            int mid = st + (end-st)/2;
            int sum = nums[st] + nums[end];

            if(sum == target){
                return {st,end};
            }else if(sum < target){
                st++;
            }else{
                end--;
            }
        }
        return {};
    }
};
