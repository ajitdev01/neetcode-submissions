class Solution {
    spiralOrder(mat: number[][]): number[] {

        let m = mat.length;
        let n = mat[0].length;

        let srow = 0, scol = 0;
        let erow = m - 1, ecol = n - 1;

        let ans: number[] = [];

        while (srow <= erow && scol <= ecol) {

            // top
            for (let i = scol; i <= ecol; i++) {
                ans.push(mat[srow][i]);
            }

            // right
            for (let j = srow + 1; j <= erow; j++) {
                ans.push(mat[j][ecol]);
            }

            // bottom
            for (let k = ecol - 1; k >= scol; k--) {

                if (srow === erow)
                    break;

                ans.push(mat[erow][k]);
            }

            // left
            for (let l = erow - 1; l >= srow + 1; l--) {

                if (scol === ecol)
                    break;

                ans.push(mat[l][scol]);
            }

            srow++;
            scol++;

            erow--;
            ecol--;
        }

        return ans;
    }
}