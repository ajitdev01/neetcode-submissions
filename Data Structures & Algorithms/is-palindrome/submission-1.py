class Solution:

    def isAlphaNum(self, ch):

        ch = ch.lower()

        return ('a' <= ch <= 'z') or ('0' <= ch <= '9')

    def isPalindrome(self, s: str) -> bool:

        st = 0
        end = len(s) - 1

        while st < end:

            if not self.isAlphaNum(s[st]):
                st += 1
                continue

            if not self.isAlphaNum(s[end]):
                end -= 1
                continue

            if s[st].lower() != s[end].lower():
                return False

            st += 1
            end -= 1

        return True