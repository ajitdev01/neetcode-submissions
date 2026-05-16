class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    maxSubArray(nums: number[]): number {

    let currSum: number = 0;
    let maxSum: number = -Infinity;

    for(let n of nums) {

        currSum += n;
        maxSum = Math.max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}
    }

