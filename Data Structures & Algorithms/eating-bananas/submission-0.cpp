class Solution {
public:

    bool isPossible(vector<int>& piles,
                    int h,
                    int speed) {

        long long totalHours = 0;

        for (int bananas : piles) {

            totalHours += (bananas + speed - 1) / speed;

        }

        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = 0;

        for (int bananas : piles) {
            high = max(high, bananas);
        }

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (isPossible(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};