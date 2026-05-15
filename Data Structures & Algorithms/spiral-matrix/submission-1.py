class Solution:
    def spiralOrder(self, mat):

        m = len(mat)
        n = len(mat[0])

        srow, scol = 0, 0
        erow, ecol = m - 1, n - 1

        ans = []

        while srow <= erow and scol <= ecol:

            # top
            for i in range(scol, ecol + 1):
                ans.append(mat[srow][i])

            # right
            for j in range(srow + 1, erow + 1):
                ans.append(mat[j][ecol])

            # bottom
            for k in range(ecol - 1, scol - 1, -1):

                if srow == erow:
                    break

                ans.append(mat[erow][k])

            # left
            for l in range(erow - 1, srow, -1):

                if scol == ecol:
                    break

                ans.append(mat[l][scol])

            srow += 1
            scol += 1

            erow -= 1
            ecol -= 1

        return ans