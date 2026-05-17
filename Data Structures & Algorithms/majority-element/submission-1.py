class Solution:

    def majorityElement(self, nums):

        fq = 0
        ans = 0

        for i in range(len(nums)):

            if fq == 0:
                ans = nums[i]

            if ans == nums[i]:
                fq += 1
            else:
                fq -= 1

        count = 0

        for val in nums:
            if val == ans:
                count += 1

        return ans if count > len(nums) // 2 else -1