use std::collections::HashMap;

impl Solution {
    pub fn frequency_sort(mut nums: Vec<i32>) -> Vec<i32> {
        let mut freq = HashMap::new();

        // Count frequency
        for &x in &nums {
            *freq.entry(x).or_insert(0) += 1;
        }

        // Sort:
        // 1. Increasing frequency
        // 2. Decreasing value if frequency is same
        nums.sort_by(|a, b| {
            let freq_a = freq[a];
            let freq_b = freq[b];

            if freq_a != freq_b {
                freq_a.cmp(&freq_b)
            } else {
                b.cmp(a)
            }
        });

        nums
    }
}