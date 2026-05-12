class Solution:

    def reverseString(self, s):

        st = 0
        end = len(s) - 1

        while st < end:

            s[st], s[end] = s[end], s[st]

            st += 1
            end -= 1