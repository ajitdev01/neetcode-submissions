class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        // Convert integers to strings
        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        // Custom sorting
        sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });

        // If the largest number is 0
        if (arr[0] == "0") {
            return "0";
        }

        // Build answer
        string ans;
        for (const string& s : arr) {
            ans += s;
        }

        return ans;
    }
};