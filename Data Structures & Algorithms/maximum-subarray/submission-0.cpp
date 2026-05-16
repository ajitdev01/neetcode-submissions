class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int crSum =0, maxSum = INT_MIN;

        for(int n : nums){
            crSum  += n ;
            maxSum = max(crSum , maxSum);

            if(crSum < 0){
                crSum = 0;
            }
        }
        return maxSum;
    }

  
};