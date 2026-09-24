class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for (string str : strs) {
            res += to_string(str.size()) + "#" + str;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find '#'
            while (s[j] != '#') {
                j++;
            }

            // Get string length
            int len = stoi(s.substr(i, j - i));

            // Extract string
            string str = s.substr(j + 1, len);
            res.push_back(str);

            // Move to next encoded string
            i = j + 1 + len;
        }

        return res;
    }
};