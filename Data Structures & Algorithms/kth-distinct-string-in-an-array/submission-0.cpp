
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> freq;

        for (const string& s : arr) {
            freq[s]++;
        }

        for (const string& s : arr) {
            if (freq[s] == 1) {
                k--;

                if (k == 0) {
                    return s;
                }
            }
        }

        return "";
    }
};
