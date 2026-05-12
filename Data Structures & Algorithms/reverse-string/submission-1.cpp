class Solution {
public:
    void reverseString(vector<char>& s) {
      int  st = 0 ;
      int  end = s.size() -1 ;

       while(st < end){
        swap(s[st++],s[end--]);
      }

    }
};