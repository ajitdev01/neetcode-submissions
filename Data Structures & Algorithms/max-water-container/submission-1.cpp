class Solution {
public:
    int maxArea(vector<int>& height) {
        // //// BurtForce Approch O(n^2)
        // short n = height.size();
        // int ans =0;
        // for(int i =0; i<n; i++){
        //     for(int j =0; j<n; j++){
        //         int w = j-i;
        //         int ht = min(height[i],height[j]);
        //         int area = w*ht;
        //         ans = max(ans,area);
        //     }
        // }
        // return ans;


       /// Otimized Approch
        int st = 0;
        int end = height.size() - 1;

        int ans = 0;

        while (st < end) {

            int area = (end - st) * min(height[st], height[end]);

            ans = max(ans, area);

            if (height[st] < height[end])
                st++;
            else
                end--;
        }

        return ans;


        
    }
};