class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        n = len(nums)
        st = 0 
        end = n-1
        while st < end :
            mid = st + (end-st)//2
            if nums[mid] < nums[mid+1]:
                st = mid+1
            else:
                end = mid
        return st
        