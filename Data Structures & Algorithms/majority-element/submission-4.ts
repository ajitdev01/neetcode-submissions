class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
   majorityElement(nums: number[]): number {

    let fq: number = 0;
    let ans: number = 0;

    for (let i = 0; i < nums.length; i++) {

        if (fq === 0) {
            ans = nums[i];
        }

        if (ans === nums[i]) {
            fq++;
        } else {
            fq--;
        }
    }

    let count: number = 0;

    for (let val of nums) {
        if (val === ans) {
            count++;
        }
    }

    return count > Math.floor(nums.length / 2) ? ans : -1;
}
}
