class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[51] = {0};

        for (int num : arr)
            freq[num]++;

        for (int i = 50; i >= 1; i--) {
            if (freq[i] == i)
                return i;
        }

        return -1;
    }
};