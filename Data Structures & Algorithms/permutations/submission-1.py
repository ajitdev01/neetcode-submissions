class Solution:

    def getPermuta(self, arr, idx, ans):

        n = len(arr)

        if idx == n:
            ans.append(arr[:])   # copy array
            return

        for i in range(idx, n):

            arr[idx], arr[i] = arr[i], arr[idx]

            self.getPermuta(arr, idx + 1, ans)

            arr[idx], arr[i] = arr[i], arr[idx]   # backtracking


    def permute(self, nums):

        ans = []

        self.getPermuta(nums, 0, ans)

        return ans