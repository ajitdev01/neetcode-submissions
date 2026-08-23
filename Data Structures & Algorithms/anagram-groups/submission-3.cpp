class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string& s : strs) {
            int count[26] = {};

            for (char c : s)
                count[c - 'a']++;

            string key;
            for (int i = 0; i < 26; i++)
                key += "#" + to_string(count[i]);

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto& [key, group] : mp)
            ans.push_back(move(group));

        return ans;
    }
};