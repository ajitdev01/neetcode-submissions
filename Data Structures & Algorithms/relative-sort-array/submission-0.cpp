
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {};

        for (int x : arr1) {
            freq[x]++;
        }

        int idx = 0;

        for (int x : arr2) {
            while (freq[x]--) {
                arr1[idx++] = x;
            }
        }

        for (int x = 0; x <= 1000; x++) {
            while (freq[x] > 0) {
                arr1[idx++] = x;
                freq[x]--;
            }
        }

        return arr1;
    }
};
