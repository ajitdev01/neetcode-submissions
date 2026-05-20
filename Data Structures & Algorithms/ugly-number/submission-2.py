class Solution:
    def isUgly(self, n: int) -> bool:
        # Base case: ugly numbers must be positive
        if n <= 0:
            return False

        # Divide by 2
        while n % 2 == 0:
            n //= 2

        # Divide by 3
        while n % 3 == 0:
            n //= 3

        # Divide by 5
        while n % 5 == 0:
            n //= 5

        # If remaining number is 1
        return n == 1