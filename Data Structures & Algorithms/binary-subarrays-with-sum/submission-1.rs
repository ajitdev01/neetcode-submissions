use std::collections::HashMap;

impl Solution {
    pub fn num_subarrays_with_sum(nums: Vec<i32>, goal: i32) -> i32 {
        let mut freq = HashMap::new();

        freq.insert(0, 1);

        let mut sum = 0;
        let mut ans = 0;

        for x in nums {
            sum += x;

            if let Some(&count) = freq.get(&(sum - goal)) {
                ans += count;
            }

            *freq.entry(sum).or_insert(0) += 1;
        }

        ans
    }
}