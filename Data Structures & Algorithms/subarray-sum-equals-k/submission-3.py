class Solution:
    def subarraySum(self, nums, k):

        n = len(nums)
        count = 0

        prefixSum = [0] * n
        prefixSum[0] = nums[0]

        # Prefix Sum Array
        for i in range(1, n):
            prefixSum[i] = prefixSum[i - 1] + nums[i]

        mp = {}

        for j in range(n):

            if prefixSum[j] == k:
                count += 1

            val = prefixSum[j] - k

            if val in mp:
                count += mp[val]

            if prefixSum[j] not in mp:
                mp[prefixSum[j]] = 0

            mp[prefixSum[j]] += 1

        return count