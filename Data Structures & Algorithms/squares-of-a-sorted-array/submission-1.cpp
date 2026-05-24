// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans;
        
//         for(int i=0 ; i<n ; i++){
//             ans.push_back(nums[i]*nums[i]);
//         }
//         sort(ans.begin(), ans.end());
//         return ans;     
//     }
// };


///// Two Pointer Approch

class Solution {
public:

    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans(n);

        int left = 0;
        int right = n - 1;

        int idx = n - 1;

        while(left <= right) {

            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if(leftSquare > rightSquare) {

                ans[idx] = leftSquare;
                left++;

            } else {

                ans[idx] = rightSquare;
                right--;
            }

            idx--;
        }

        return ans;
    }
};