class Solution:
    def frequencySort(self, nums):
        freq = {}

        # Count frequency
        for x in nums:
            freq[x] = freq.get(x, 0) + 1

        # Sort:
        # 1. Increasing frequency
        # 2. Decreasing value if frequency is same
        nums.sort(key=lambda x: (freq[x], -x))

        return nums