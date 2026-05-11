class Solution {
public:
    int compress(vector<char>& charss) {
        int n = charss.size();
        int idx = 0 ;      

        for(int i = 0 ; i < n ; i++){
            char ch = charss[i];
            int count = 0 ;

            while( i < n && charss[i] == ch){
                count ++;
                i++;
            }
            charss[idx++] = ch;
            if(count > 1){
                string str = to_string(count);
                for(char dig : str){
                    charss[idx++] = dig;
                }
            }
            i--;
        }  
        
       return idx ;  
    }
};