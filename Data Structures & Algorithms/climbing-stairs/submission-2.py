class Solution:
    def climbStairs(self, n: int) -> int:
        if n <= 2:
            return n
        
        # a is ways to reach (i-2), b is ways to reach (i-1)
        a, b = 1, 2
        
        for _ in range(3, n + 1):
            a, b = b, a + b
            
        return b