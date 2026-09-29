class Solution:
    def numSubarraysWithSum(self, nums, goal):
        freq = {0: 1}

        total = 0
        ans = 0

        for x in nums:
            total += x

            if total - goal in freq:
                ans += freq[total - goal]

            freq[total] = freq.get(total, 0) + 1

        return ans