class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
     # Option 1: Using the multiplication operator (Cleanest)
        return nums * 2
        
        # Option 2: Using the addition operator
        # return nums + nums 