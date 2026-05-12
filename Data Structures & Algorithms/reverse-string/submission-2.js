class Solution {
    reverseString(s) {
        let st = 0 ;
        let end = s.length -1;

        while(st < end){
           [s[st] , s[end]] = [s[end] , s[st]]
            st++;
            end--;
        }
    }
}