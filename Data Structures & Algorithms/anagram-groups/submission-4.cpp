class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (auto& s : strs) {
            array<int, 26> count{};

            for (char c : s)
                count[c - 'a']++;

            string key;
            for (int x : count)
                key += to_string(x) + '#';

            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& [key, group] : mp)
            result.push_back(move(group));

        return result;
    }
};