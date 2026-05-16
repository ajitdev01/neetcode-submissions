class Solution {

    public int maxSubArray(int[] nums) {

        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;

        for(int n : nums) {

            currSum += n;
            maxSum = Math.max(currSum, maxSum);

            if(currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;
    }
}