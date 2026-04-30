class Solution {
public:
    int search(vector<int>& nums, int target) {
        //// Linear Search O(n)
    //    int n = nums.size();
    //    for(int i = 0; i<n ; i++){
    //         if(nums[i] == target){
    //             return i;
    //         }
    //    } 
    //    return -1;



    //// this is Binary Search O(log n)
    int st =0 , end = nums.size();
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
             end = mid-1;
        }else{
          st = mid +1; 
        }

    }
    return -1;
    }
};
