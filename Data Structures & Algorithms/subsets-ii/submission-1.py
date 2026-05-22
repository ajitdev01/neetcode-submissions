class Solution:
    def getallSubsets(self, nums, ans, i, allSubsets):
        if i == len(nums):
            allSubsets.append(ans[:])   # copy list
            return

        # include
        ans.append(nums[i])
        self.getallSubsets(nums, ans, i + 1, allSubsets)

        ans.pop()

        idx = i + 1
        while idx < len(nums) and nums[idx] == nums[idx - 1]:
            idx += 1

        # exclude
        self.getallSubsets(nums, ans, idx, allSubsets)

    def subsetsWithDup(self, nums):
        nums.sort()

        allSubsets = []
        ans = []

        self.getallSubsets(nums, ans, 0, allSubsets)

        return allSubsets