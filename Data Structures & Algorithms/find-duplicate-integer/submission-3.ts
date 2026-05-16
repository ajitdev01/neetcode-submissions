class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findDuplicate(nums: number[]): number {

    let slow: number = nums[0];
    let fast: number = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while(slow !== fast);

    slow = nums[0];

    while(slow !== fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}
    }

