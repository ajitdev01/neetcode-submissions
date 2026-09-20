class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;

        // Calculate total sum
        for (int x : nums) {
            total += x;
        }

        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            // Right sum = total - leftSum - current element
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};