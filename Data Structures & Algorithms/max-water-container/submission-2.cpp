class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    int MaxWater = 0;

    // // TLE ERROR Bcoz this O(n2) 
    // for(int i =0; i<n ; i++){
    //     for(int j = i+1 ; j<n ; j++){
    //         int weight = j-i;
    //         int high = min(height[i] ,height[j]);
    //         int currWater = weight* high;

    //         MaxWater = max(MaxWater , currWater);
    //     }
    // }


    
     ///// left = st and right = end;
     int st = 0 , end = n-1;
     while(st<end){
        int w = end -st;
        int ht = min(height[st], height[end]);
        int currWater = w * ht;
        MaxWater = max(MaxWater , currWater);
        height[st]< height[end] ? st++ : end--;
     }
     return MaxWater;
    }
};