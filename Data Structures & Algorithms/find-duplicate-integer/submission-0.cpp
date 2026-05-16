class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //// first log 

        // unordered_set<int> s;
        // for (int val : nums)
        // {
        //     if (s.find(val) != s.end())
        //     {
        //         return val;
        //     }
        //     s.insert(val);
        // }
        // return -1;

        // //// sec Log but mistek
        // sort(nums.begin(), nums.end());
        // for (int i = 1; i < nums.size() - 1; i++)
        // {
        //     if (nums[i] == nums[i - 1])
        //     {
        //         return i;
        //     }
        // }
        // return -1;

        // slow-fast approch
        // array imagein LL
        int slow = nums[0], fast = nums[0];
        do
        {
            slow = nums[slow];       // +1
            fast = nums[nums[fast]]; //+2
        } while (slow != fast);
        slow = nums[0];
        while (slow != fast)
        {
            slow = nums[slow]; // +1
            fast = nums[fast]; //+1
        }

        return slow;

    }
};