// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//         unordered_set<int> st;
//         st.reserve(nums.size());

//         for (int x : nums) {
//             if (!st.insert(x).second) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };

//// more Better

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());

        for(int i = 1 ;i<=n; i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }

        return false;
    }
};