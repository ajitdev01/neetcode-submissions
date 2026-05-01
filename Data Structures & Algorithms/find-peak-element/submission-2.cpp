class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    //    // Linera Search O(n)
    //    int n = nums.size() , ans = 0;
    //    for(int i = 0 ; i<n ; i++ ){
    //         ans = max(nums[i] , ans);
    //    } 
    //    for(int i = 0 ; i<n ; i++){
    //       if(nums[i] == ans){
    //         return i;
    //       }
    //    }
    //    return ans;

        int n = nums.size() ;
        int st = 0 , end = n-1;
        while(st<end){
            int mid = st + (end-st)/2;

            if(nums[mid] < nums[mid+1]){
                st = mid+1;
            }else{
                end = mid;
            }
        } 
        return st;
    }
};