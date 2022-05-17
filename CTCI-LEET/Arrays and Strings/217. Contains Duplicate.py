class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:

        s = list(set(nums))
        x = len(nums)
        y = len(s)

        if  x==y :
            return False
        else:return True
        
        