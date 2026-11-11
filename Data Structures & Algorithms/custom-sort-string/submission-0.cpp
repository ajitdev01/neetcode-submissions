class Solution {
public:
    string customSortString(string order, string s) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }

        string ans;

        for (char c : order) {
            while (freq[c - 'a'] > 0) {
                ans += c;
                freq[c - 'a']--;
            }
        }

        for (int i = 0; i < 26; i++) {
            while (freq[i] > 0) {
                ans += char('a' + i);
                freq[i]--;
            }
        }

        return ans;
    }
};