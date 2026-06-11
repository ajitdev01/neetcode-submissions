class Solution {
public:
    unordered_map<int, int> cache;

    int getVal(MountainArray &A, int idx) {
        if (cache.count(idx))
            return cache[idx];

        return cache[idx] = A.get(idx);
    }

    int binarySearch(MountainArray &A,
                     int st,
                     int end,
                     int target,
                     bool ascending) {

        while (st <= end) {
            int mid = st + (end - st) / 2;
            int val = getVal(A, mid);

            if (val == target)
                return mid;

            if (ascending) {
                if (val < target)
                    st = mid + 1;
                else
                    end = mid - 1;
            } else {
                if (val < target)
                    end = mid - 1;
                else
                    st = mid + 1;
            }
        }

        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n = mountainArr.length();

        // Find Peak
        int st = 0, end = n - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            if (getVal(mountainArr, mid) <
                getVal(mountainArr, mid + 1)) {
                st = mid + 1;
            } else {
                end = mid;
            }
        }

        int peak = st;

        // Search Left (Ascending)
        int ans = binarySearch(
            mountainArr,
            0,
            peak,
            target,
            true
        );

        if (ans != -1)
            return ans;

        // Search Right (Descending)
        return binarySearch(
            mountainArr,
            peak + 1,
            n - 1,
            target,
            false
        );
    }
};