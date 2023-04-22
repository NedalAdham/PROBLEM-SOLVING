class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        Len = len(nums)
        nums.sort()
        for i in range (Len) :
            if i != nums[i]: return i
        return Len
