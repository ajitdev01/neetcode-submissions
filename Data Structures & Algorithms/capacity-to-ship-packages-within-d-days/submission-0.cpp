class Solution {
public:
    bool isPosible(vector<int> Wei , int Day , int n , int mid ){
        int life = 1;
        int curr = 0 ;
        for(int i = 0 ; i<n;i++){
            if(Wei[i] > mid){
                return false;
            }
            if(curr + Wei[i] <= mid){
                curr += Wei[i];
            }else{
                life ++;
                curr = Wei[i];
            }
        }
      return  life <= Day;
    }


    int shipWithinDays(vector<int>& Wei, int Day) {
        int n = Wei.size();
        if(Day>n){
            return -1;
        }

        int Sum = 0 , Maxi = 0;
        for(int val : Wei){
            Sum += val;
            Maxi = max(Maxi, val);
        }
        int st = Maxi , end =Sum , ans = -1;
        while(st<=end){
            int mid = st + (end-st)/2;

            if(isPosible(Wei , Day ,n, mid)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }

        return ans;
    }
};
