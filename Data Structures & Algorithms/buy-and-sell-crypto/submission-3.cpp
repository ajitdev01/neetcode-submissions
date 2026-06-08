class Solution {
public:
    int maxProfit(vector<int>& S) {
        if(S.empty()) return -1;
        int MaxPf = 0 , bestBuy = S[0];

        for(int i = 1 ; i<S.size() ; i++){
            MaxPf = max(MaxPf,S[i]-bestBuy);
            bestBuy = min(bestBuy,S[i]);
        }
        return MaxPf;
    }
};