class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int st =0 , end = n-1;
        while(st<=end){
            if(s[st] == s[end]){
                st++;
                end--;
            }else{
                return false;
            }
            return true;
        }

        return false;
    }
};