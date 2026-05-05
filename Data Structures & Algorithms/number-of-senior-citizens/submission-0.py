class Solution:
    def countSeniors(self, details: List[str]) -> int:
       return sum(int(passenger[11:13]) > 60 for passenger in details) 