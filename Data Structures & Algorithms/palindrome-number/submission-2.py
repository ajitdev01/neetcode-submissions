class Solution:

    def reverse(self, n: int) -> int:

        reverseNum = 0

        sign = -1 if n < 0 else 1

        n = abs(n)

        while n != 0:

            dig = n % 10

            # overflow check
            if reverseNum > (2**31 - 1) // 10:
                return 0

            reverseNum = reverseNum * 10 + dig

            n //= 10

        return reverseNum * sign


    def isPalindrome(self, n: int) -> bool:

        if n < 0:
            return False

        reverseNumber = self.reverse(n)

        return reverseNumber == n