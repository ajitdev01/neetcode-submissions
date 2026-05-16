class Solution:
    def maxSubArray(self, nums):

        currSum = 0
        maxSum = float('-inf')

        for n in nums:

            currSum += n
            maxSum = max(currSum, maxSum)

            if currSum < 0:
                currSum = 0

        return maxSum