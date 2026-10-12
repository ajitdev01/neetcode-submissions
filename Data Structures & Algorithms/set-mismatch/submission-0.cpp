class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long sum = 0, sumSq = 0;

        for (int x : nums) {
            sum += x;
            sumSq += 1LL * x * x;
        }

        long long expectedSum = n * (n + 1) / 2;
        long long expectedSq = n * (n + 1) * (2 * n + 1) / 6;

        long long diff = sum - expectedSum; 
        long long sqDiff = sumSq - expectedSq;

        long long sumDupMissing = sqDiff / diff;

        int duplicate = (diff + sumDupMissing) / 2;
        int missing = sumDupMissing - duplicate;

        return {duplicate, missing};
    }
};