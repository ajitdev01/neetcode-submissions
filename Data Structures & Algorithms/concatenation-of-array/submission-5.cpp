class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans = nums; // Copy original array first
        ans.insert(ans.end(), nums.begin(), nums.end()); // Append original array
        return ans; 
    }
};