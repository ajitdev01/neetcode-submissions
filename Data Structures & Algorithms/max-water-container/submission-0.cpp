class Solution {
public:
    int maxArea(vector<int>& height) {
        //// BurtForce Approch O(n^2)
        short n = height.size();
        int ans =0;
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                int w = j-i;
                int ht = min(height[i],height[j]);
                int area = w*ht;
                ans = max(ans,area);
            }
        }

        return ans;
        
    }
};