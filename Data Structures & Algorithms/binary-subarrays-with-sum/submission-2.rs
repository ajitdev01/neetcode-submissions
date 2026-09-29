impl Solution {
    pub fn num_subarrays_with_sum(nums: Vec<i32>, goal: i32) -> i32 {
        fn at_most(nums: &[i32], goal: i32) -> i32 {
            if goal < 0 {
                return 0;
            }

            let mut left = 0;
            let mut sum = 0;
            let mut ans = 0;

            for right in 0..nums.len() {
                sum += nums[right];

                while sum > goal {
                    sum -= nums[left];
                    left += 1;
                }

                ans += (right - left + 1) as i32;
            }

            ans
        }

        at_most(&nums, goal) - at_most(&nums, goal - 1)
    }
}