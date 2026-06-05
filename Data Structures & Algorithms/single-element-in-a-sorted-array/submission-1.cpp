class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // //// Linear Serach
        // int ans = 0 , n = nums.size() ;
        // for(int i = 0 ; i<n ; i++ ){
        //     ans ^= nums[i];
        // }
        // return ans;


        ///Binary Searh 
        int n = nums.size();
        if(n == 1) return nums[0];
        int st = 0 , end = n-1 ;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];
            // Main Check 
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1] ) return nums[mid];

            if(mid % 2 == 0 ){ // even
                if(nums[mid] ==  nums[mid-1]){ // left case
                    end = mid -1;
                }else{ // right case
                    st = mid+1;
                }
             }else {
                if(nums[mid] ==  nums[mid-1]){ // right case 
                    st = mid+1;
                }else{ // left case
                    end = mid -1;
                }
            }

        }
         return -1;

    }
};