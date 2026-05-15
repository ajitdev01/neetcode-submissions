
class Solution {

    public List<Integer> spiralOrder(int[][] mat) {

        int m = mat.length;
        int n = mat[0].length;

        int srow = 0, scol = 0;
        int erow = m - 1, ecol = n - 1;

        List<Integer> ans = new ArrayList<>();

        while (srow <= erow && scol <= ecol) {

            // top
            for (int i = scol; i <= ecol; i++) {
                ans.add(mat[srow][i]);
            }

            // right
            for (int j = srow + 1; j <= erow; j++) {
                ans.add(mat[j][ecol]);
            }

            // bottom
            for (int k = ecol - 1; k >= scol; k--) {

                if (srow == erow)
                    break;

                ans.add(mat[erow][k]);
            }

            // left
            for (int l = erow - 1; l >= srow + 1; l--) {

                if (scol == ecol)
                    break;

                ans.add(mat[l][scol]);
            }

            srow++;
            scol++;

            erow--;
            ecol--;
        }

        return ans;
    }
}