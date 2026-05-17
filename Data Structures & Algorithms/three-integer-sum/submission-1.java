
class Solution
{
    public List<List<Integer>> threeSum(int[] nums)
    {
        int n = nums.length;

        // Step 1 : Sort the array
        Arrays.sort(nums);

        // Final answer list
        List<List<Integer>> ans = new ArrayList<>();

        // Step 2 : Fix one element
        for (int i = 0; i < n; i++)
        {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            // Two Pointer Approach
            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];

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
                    ans.add(Arrays.asList(
                            nums[i],
                            nums[left],
                            nums[right]
                    ));

                    left++;
                    right--;

                    // Skip duplicate values
                    while (left < right &&
                           nums[left] == nums[left - 1])
                    {
                        left++;
                    }

                    while (left < right &&
                           nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
}