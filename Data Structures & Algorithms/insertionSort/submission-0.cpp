#include <vector>
#include <string>

using namespace std;

// Definition for a Pair (provided for context)
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };

class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> states;
        int n = pairs.size();
        
        for (int i = 0; i < n; ++i) {
            int j = i;
            // Shift elements backward as long as the previous element's key is larger
            // Using strictly greater than (>) ensures the sort remains stable
            while (j > 0 && pairs[j - 1].key > pairs[j].key) {
                // Swap pairs[j] and pairs[j - 1]
                Pair temp = pairs[j];
                pairs[j] = pairs[j - 1];
                pairs[j - 1] = temp;
                j--;
            }
            // Record the state of the array after the i-th element is inserted
            states.push_back(pairs);
        }
        
        return states;
    }
};