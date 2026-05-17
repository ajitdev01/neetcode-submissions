class Solution
{
    threeSum(nums)
    {
        const n = nums.length;

        // Step 1 : Sort the array
        nums.sort((a, b) => a - b);

        // Final answer array
        const ans = [];

        // Step 2 : Fix one element
        for (let i = 0; i < n; i++)
        {
            // Skip duplicate elements
            if (i > 0 && nums[i] === nums[i - 1])
            {
                continue;
            }

            let left = i + 1;
            let right = n - 1;

            // Two Pointer Approach
            while (left < right)
            {
                const sum =
                    nums[i] +
                    nums[left] +
                    nums[right];

                // If sum is smaller
                if (sum < 0)
                {
                    left++;
                }

                // If sum is larger
                else if (sum > 0)
                {
                    right--;
                }

                // Valid triplet found
                else
                {
                    ans.push([
                        nums[i],
                        nums[left],
                        nums[right]
                    ]);

                    left++;
                    right--;

                    // Skip duplicate values
                    while (
                        left < right &&
                        nums[left] === nums[left - 1]
                    )
                    {
                        left++;
                    }

                    while (
                        left < right &&
                        nums[right] === nums[right + 1]
                    )
                    {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
}