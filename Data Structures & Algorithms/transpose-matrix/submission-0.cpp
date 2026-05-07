class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& M) {
      
         int rows = M.size();
        int cols = M[0].size();
       
        vector<vector<int>> result(cols, vector<int>(rows));

        for(int i = 0; i<rows ; i++){
            for(int j = 0 ; j<cols ; j++){
                result[j][i] = M[i][j];
            }
        }
        return result;
        
    }
};