class Solution:
    def myPow(self, x: float, n: int) -> float:
        # Handle negative exponent
        if n < 0:
            x = 1 / x
            n = -n
        
        result = 1.0
        current_product = x
        
        while n > 0:
            # If n is odd, multiply the result by current_product
            if n % 2 == 1:
                result *= current_product
            
            # Square the base and halve the exponent
            current_product *= current_product
            n //= 2  # Use integer division
            
        return result