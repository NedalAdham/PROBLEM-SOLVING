class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        sumAll = sum(nums)
        stepsum = 0
        for i , num in enumerate (nums):
          stepsum += num
          if stepsum > sumAll - stepsum :
             return nums[:i+1]
