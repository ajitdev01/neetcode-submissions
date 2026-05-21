class Solution {
public:

    static bool cmp(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        for (int x : nums) {
            arr.push_back(to_string(x));
        }

        sort(arr.begin(), arr.end(), cmp);

        // Edge case: all zeros
        if (arr[0] == "0")
            return "0";

        string ans = "";

        for (string s : arr) {
            ans += s;
        }

        return ans;
    }
};