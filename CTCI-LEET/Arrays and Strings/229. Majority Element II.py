class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        ounter = collections . Counter (nums)
        return [lol for lol , value in ounter .items() if value > int(len(nums)/3) ]
        