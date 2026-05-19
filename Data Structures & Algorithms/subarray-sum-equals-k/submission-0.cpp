///// Burte Force Approch
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) // starting Point
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            { // nding
                sum += nums[j];
                if (sum == k)
                    count++;
            }
        }

        return count;
    }
};