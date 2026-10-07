class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for the next non-val element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k; // k represents the number of elements not equal to val
    }
};