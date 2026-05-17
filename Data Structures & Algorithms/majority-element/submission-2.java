class Solution {

    public int majorityElement(int[] nums) {

        int fq = 0;
        int ans = 0;

        for (int i = 0; i < nums.length; i++) {

            if (fq == 0) {
                ans = nums[i];
            }

            if (ans == nums[i]) {
                fq++;
            } else {
                fq--;
            }
        }

        int count = 0;

        for (int val : nums) {
            if (val == ans) {
                count++;
            }
        }

        return count > nums.length / 2 ? ans : -1;
    }
}