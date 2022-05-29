class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n = len (nums)
        dp = [1 for i in range (n+1)]
        for i in range (1 , n):
            for k in range (i):
                 if nums[k] < nums[i] :
                    dp[i] =  max(dp[i]  ,dp[k]+1)
        return max (dp)
        