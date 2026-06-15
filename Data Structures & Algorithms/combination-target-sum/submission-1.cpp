#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
  set<vector<int>> s;
  void getAllCombinations(vector<int> &arr, int idx, int target,
                          vector<vector<int>> &ans, vector<int> &combin) {
    if (idx == arr.size() || target < 0) {
      return;
    }
    if (target == 0) {
      if (s.find(combin) == s.end()) {
        ans.push_back(combin);
        s.insert(combin);
      }
      return;
    }

    combin.push_back(arr[idx]);
    //  // Single
    getAllCombinations(arr, idx + 1, target - arr[idx], ans, combin);
    // // Multiple
    getAllCombinations(arr, idx, target - arr[idx], ans, combin);
    combin.pop_back();
    //  // exclustion
    getAllCombinations(arr, idx + 1, target, ans, combin);
  }

  vector<vector<int>> combinationSum(vector<int> &arr, int target) {
    vector<vector<int>> ans;
    vector<int> combin;
    getAllCombinations(arr, 0, target, ans, combin);
    return ans;
  }
};
