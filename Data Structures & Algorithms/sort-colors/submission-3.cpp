class Solution {
public:
    void sortColors(vector<int>& nums) {
        //// but not use STL libs 
        // sort(nums.begin() , nums.end());


        //// Otmized logic   O(n)
        int n = nums.size();
        int count0 = 0 , count1 = 0 , count2  =0;

        // O(n)
        for(int  i = 0 ; i<n ; i++ ){
            if(nums[i] == 0) count0++;
            else if( nums[i] == 1) count1++;
            else count2++;
        }
        // O(n)
        int idex  =0 ;
        for(int i = 0 ; i<count0 ; i++ ){
            nums[idex++] = 0;
        }
         for(int i = 0 ; i<count1 ; i++ ){
            nums[idex++] = 1;
        }
         for(int i = 0 ; i<count2 ; i++ ){
            nums[idex++] = 2;
        }
    }
};