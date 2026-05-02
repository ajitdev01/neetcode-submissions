class Solution:
    def sortArray(self, nums):
        self.merge_sort(nums, 0, len(nums) - 1)
        return nums

    def merge_sort(self, nums, left, right):
        if left >= right:
            return

        mid = (left + right) // 2

        self.merge_sort(nums, left, mid)
        self.merge_sort(nums, mid + 1, right)

        self.merge(nums, left, mid, right)

    def merge(self, nums, left, mid, right):
        temp = []
        i, j = left, mid + 1

        while i <= mid and j <= right:
            if nums[i] <= nums[j]:
                temp.append(nums[i])
                i += 1
            else:
                temp.append(nums[j])
                j += 1

        while i <= mid:
            temp.append(nums[i])
            i += 1

        while j <= right:
            temp.append(nums[j])
            j += 1

        # copy back
        for k in range(len(temp)):
            nums[left + k] = temp[k]