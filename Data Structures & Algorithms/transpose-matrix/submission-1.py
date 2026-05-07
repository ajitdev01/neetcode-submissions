class Solution:
    def transpose(self, M: list[list[int]]) -> list[list[int]]:
        rows = len(M)
        cols = len(M[0])
        
        # Initialize a new matrix with 'cols' rows and 'rows' columns
        # Using [0] * rows for each of the 'cols' rows
        result = [[0] * rows for _ in range(cols)]
        
        for i in range(rows):
            for j in range(cols):
                result[j][i] = M[i][j]
                
        return result