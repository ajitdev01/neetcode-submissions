class Solution {
public:
    bool isSubsequence(string s, string t) {
       int st = 0 , end = 0;
       while(st< s.size() && end < t.size()){
        if(s[st] == t[end]){
            st++;
        }
        end++;
       }
       return st == s.size();
    }
};