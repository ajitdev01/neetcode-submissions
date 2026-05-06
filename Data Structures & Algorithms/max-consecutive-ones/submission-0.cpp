class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& A) {
        int n = A.size();
        int ans =0;
        int maxi =0;
        for(int i = 0; i < n ; i++ ){
            if(A[i] == 1){
                maxi += 1;
                ans = max(ans,maxi);
            }else {
                maxi = 0;
            }
        }
        return ans;
    }
};