class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        ans = [1] * n

        # Prefix products
        for i in range(1, n):
            ans[i] = ans[i - 1] * nums[i - 1]

        # Suffix products
        suffix = 1
        for i in range(n - 2, -1, -1):
            suffix *= nums[i + 1]
            ans[i] *= suffix

        return ans