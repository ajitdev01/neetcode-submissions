class Solution:
    def addBinary(self, a: str, b: str) -> str:
        res = []
        i, j = len(a) - 1, len(b) - 1
        carry = 0
        
        # Continue while there are digits to process or a leftover carry
        while i >= 0 or j >= 0 or carry:
            total = carry
            
            if i >= 0:
                total += int(a[i])
                i -= 1
            if j >= 0:
                total += int(b[j])
                j -= 1
                
            # append the remainder (0 or 1)
            res.append(str(total % 2))
            # update the carry
            carry = total // 2
            
        # Join the list and reverse it
        return "".join(res[::-1])