class Solution {
    /**
     * @param {character[]} s
     * @return {void} Do not return anything, modify s in-place instead.
     */
    reverseString(s: string[]): void {
        let st:number = 0
        let end:number = s.length-1;
        while(st<end){
            [s[st] , s[end]] = [s[end] , s[st]];
            st++
            end--
        }
        
    }
}
