class Solution {
    
     majorityElement(nums) {
    let fq = 0;
    let ans = 0;

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

    let count = 0;

    for (let val of nums) {
        if (val === ans) {
            count++;
        }
    }

    return count > Math.floor(nums.length / 2) ? ans : -1;
}
}
