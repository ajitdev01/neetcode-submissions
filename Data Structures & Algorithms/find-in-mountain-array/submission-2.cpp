class Solution {
public:

    int binarySearchAsc(MountainArray &A,
                        int st,
                        int end,
                        int target){

        while(st <= end){
            int mid = st + (end - st)/2;

            int val = A.get(mid);

            if(val == target)
                return mid;

            if(val < target)
                st = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }

    int binarySearchDesc(MountainArray &A,
                         int st,
                         int end,
                         int target){

        while(st <= end){
            int mid = st + (end - st)/2;

            int val = A.get(mid);

            if(val == target)
                return mid;

            if(val < target)
                end = mid - 1;
            else
                st = mid + 1;
        }

        return -1;
    }

    int findInMountainArray(int target,
                            MountainArray &mountainArr) {

        int n = mountainArr.length();

        int st = 0;
        int end = n - 1;

        // Find Peak
        while(st < end){
            int mid = st + (end - st)/2;

            if(mountainArr.get(mid) <
               mountainArr.get(mid + 1))
                st = mid + 1;
            else
                end = mid;
        }

        int peak = st;

        // Search Left
        int leftAns =
            binarySearchAsc(mountainArr,
                            0,
                            peak,
                            target);

        if(leftAns != -1)
            return leftAns;

        // Search Right
        return binarySearchDesc(mountainArr,
                                peak + 1,
                                n - 1,
                                target);
    }
};