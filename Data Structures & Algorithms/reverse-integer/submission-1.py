class Solution:
    def reverse(self, n: int) -> int:
        reverseNum = 0

        while n != 0:

            # digit extraction
            dig = int(n % 10)

            # handling negative numbers in Python
            if n < 0:
                dig = -(-n % 10)

            # overflow check
            if reverseNum > 2**31 // 10 or reverseNum < -2**31 // 10:
                return 0

            reverseNum = reverseNum * 10 + dig

            # removing last digit
            n = int(n / 10)

        return reverseNum