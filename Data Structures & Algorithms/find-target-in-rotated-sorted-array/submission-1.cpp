class Solution {
public:
    int search(vector<int>& nums, int target) {

        // // Liner Search
        // int n = nums.size();
        // for(int i = 0; i<n ; i++){
        //     if(nums[i] == target){
        //         return i;
        //     }
        // }
        // return -1;

        /// Binary Search
        int st = 0, end = nums.size() - 1;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            if(nums[st] <= nums[mid]) { // Left Sorted

                if(nums[st] <= target && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }

            } else { // Right Sorted

                if(nums[mid] < target && target <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1;
    }
};