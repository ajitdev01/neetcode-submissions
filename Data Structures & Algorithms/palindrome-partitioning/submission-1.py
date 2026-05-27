class Solution:

    def isPali(self, s: str) -> bool:
        return s == s[::-1]

    def getAllParts(self,
                    s: str,
                    partitions: list,
                    ans: list):

        n = len(s)

        if n == 0:
            ans.append(partitions[:])
            return

        for i in range(n):

            part = s[:i + 1]

            if self.isPali(part):

                partitions.append(part)

                self.getAllParts(
                    s[i + 1:],
                    partitions,
                    ans
                )

                partitions.pop()

    def partition(self, s: str):
        ans = []
        partitions = []

        self.getAllParts(s, partitions, ans)

        return ans