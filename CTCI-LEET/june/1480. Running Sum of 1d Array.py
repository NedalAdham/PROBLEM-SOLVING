class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        total = 0
        partial_sums = [total :=total + v for v in nums]     
        return partial_sums