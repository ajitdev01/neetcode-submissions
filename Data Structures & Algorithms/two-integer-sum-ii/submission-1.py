class Solution:
    def twoSum(self, numbers, target):
        left, right = 0, len(numbers) - 1

        while left < right:
            s = numbers[left] + numbers[right]

            if s == target:
                return [left + 1, right + 1]  # 1-indexed
            elif s < target:
                left += 1
            else:
                right -= 1