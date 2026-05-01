class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       // Linera Search O(n)
       int n = nums.size() , ans =-1 ;
       for(int i = 0 ; i<n ; i++ ){
            ans = max(nums[i] , ans);
       } 
       for(int i = 0 ; i<n ; i++){
          if(nums[i] == ans){
            return i;
          }
       }

       return ans;
    }
};