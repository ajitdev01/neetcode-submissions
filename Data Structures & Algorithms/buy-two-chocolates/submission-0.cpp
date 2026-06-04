#include <vector>
#include <ranges>
#include <algorithm>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        ranges::sort(prices);

        int cost = prices[0] + prices[1];

        return cost <= money ? money - cost : money;
    }
};