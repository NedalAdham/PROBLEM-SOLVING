class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        #Boyer-Moore Voting Algorithm
        count = 0
        can = None
        for num in nums :
            if count == 0 : can = num
            count += (1 if num == can else -1)
        return can
        