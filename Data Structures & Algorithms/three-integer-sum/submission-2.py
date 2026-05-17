class Solution:

    def threeSum(self, nums):

        n = len(nums)

        # Step 1 : Sort the array
        nums.sort()

        # Final answer list
        ans = []

        # Step 2 : Fix one element
        for i in range(n):

            # Skip duplicate elements
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            left = i + 1
            right = n - 1

            # Two Pointer Approach
            while left < right:

                total = nums[i] + nums[left] + nums[right]

                # If sum is smaller
                if total < 0:
                    left += 1

                # If sum is larger
                elif total > 0:
                    right -= 1

                # Valid triplet found
                else:

                    ans.append([
                        nums[i],
                        nums[left],
                        nums[right]
                    ])

                    left += 1
                    right -= 1

                    # Skip duplicate values
                    while (left < right and
                           nums[left] == nums[left - 1]):
                        left += 1

                    while (left < right and
                           nums[right] == nums[right + 1]):
                        right -= 1

        return ans