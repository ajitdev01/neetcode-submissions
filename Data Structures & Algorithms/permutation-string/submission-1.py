class Solution:

    def isFreqSame(self, freq1, freq2):

        for i in range(26):
            if freq1[i] != freq2[i]:
                return False

        return True

    def checkInclusion(self, s1: str, s2: str) -> bool:

        freq = [0] * 26

        # store frequency of s1
        for ch in s1:
            freq[ord(ch) - ord('a')] += 1

        winSize = len(s1)

        for i in range(len(s2)):

            windIdx = 0
            idx = i

            windfreq = [0] * 26

            while windIdx < winSize and idx < len(s2):

                windfreq[ord(s2[idx]) - ord('a')] += 1

                windIdx += 1
                idx += 1

            if self.isFreqSame(freq, windfreq):
                return True

        return False