class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // ///Burt Force Approch TLE O(n^2)
        // vector <int> ans(nums.size(), 1);
        // int n = nums.size();
        // for(int i =0; i<n ; i++){
        //     for(int j =0; j<n ; j++){
        //         if(i !=j ){
        //             ans[i]  *= nums[j];
        //         }
        //     }
        // }
        // return ans;



        // /// Otimal But Time and Space Both are O(n)
        //  int n = nums.size();
        //  vector <int> ans(n, 1);
        //  vector <int> prefix(n, 1);
        //  vector <int> suffix(n, 1);


        //  // prefix
        //  for(int i =1; i<n ; i++){
        //     prefix[i] = prefix[i - 1] * nums[i - 1];
        //  }
        //  /// Suffix
        //  for(int i = n-2; i>=0 ; i-- ){
        //     suffix[i] = suffix[i + 1]  *  nums[i + 1];
        //  }

        //   // ans 
        //   for(int i = 0; i<n ; i++){
        //     ans[i] = prefix[i] * suffix[i];
        //   }

        // return ans;



        ///most  Otimal But Time  are O(n)  and Space O(1)
         int n = nums.size();
         vector <int> ans(n, 1);
  
      


         // prefix
         for(int i =1; i<n ; i++){
            ans[i] = ans[i - 1] * nums[i - 1];
         }

         /// Suffix
         int suffix =1;
         for(int i = n-2; i>=0 ; i-- ){
            suffix *= nums[i+1]; // ith suffix
            ans[i] *= suffix;
         }

        

        return ans;





    }
};