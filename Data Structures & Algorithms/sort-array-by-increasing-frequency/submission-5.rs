use std::cmp::Reverse;
use std::collections::{BinaryHeap, HashMap};

impl Solution {
    pub fn frequency_sort(nums: Vec<i32>) -> Vec<i32> {
        let mut heap = nums
            .into_iter()
            .fold(HashMap::new(), |mut acc, x| {
                *acc.entry(x).or_insert(0) += 1;
                acc
            })
            .into_iter()
            .map(|(num, count)| (Reverse(count), num))
            .collect::<BinaryHeap<_>>();

        let mut res = Vec::new();

        while let Some((Reverse(count), num)) = heap.pop() {
            res.extend(std::iter::repeat(num).take(count as usize));
        }

        res
    }
}