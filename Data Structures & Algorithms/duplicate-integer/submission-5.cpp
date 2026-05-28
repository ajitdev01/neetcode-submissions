class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //    int n = nums.size();
    //    sort(nums.begin(), nums.end());
    //     for(int i =1; i<n ; i++){
    //         if(nums[i] == nums[i-1]){
    //             return true;
    //         }
    //     }    
    //     return false;

    //// Using Set
    unordered_set<int> st;

       for(int x : nums){
            if(st.count(x)){
                return true;
            }
            st.insert(x);
        }

    return false;
    
    }
};