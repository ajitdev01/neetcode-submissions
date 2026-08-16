class Solution {
public:
     ///// Same Like Book Allocation ... More Better 
    bool Isvalid(vector<int> &nums , int n , int k , int mid){
        int curr = 1;
        int life = 0;
        for(int i = 0 ; i<n ; i++ ){
            if(nums[i]> mid){
                return false;
            }else if(life + nums[i] <= mid){
                life += nums[i];
            }else{
                curr++;
                life = nums[i];
            }
        }
        return curr <= k;
    }


    int splitArray(vector<int>& nums, int k) {
        int  n = nums.size();

        if(k>n){
            return -1;
        }
        ///// now Maxi 
        int Sum = 0 , Maxi =0;
        for(int val : nums){
            Sum += val;
            Maxi = max(Maxi , val);
        }

        int st = Maxi , end = Sum, ans = -1;

        while(st<=end){
            int mid = st + (end - st)/2;
            if(Isvalid(nums,n ,k , mid)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        return ans;
    }
};