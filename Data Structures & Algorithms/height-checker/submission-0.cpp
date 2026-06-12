class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> num = heights;
        sort(heights.begin(),heights.end());
        int ans =0;
        for(int i =0 ; i<n ; i++){
            if(heights[i]!=num[i]){
                ans++;
            }
        }

        return ans;

    }
};