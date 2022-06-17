class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        words.sort(key = len)
        dp ={}
        res = 1
        for i in (words):
            dp[i] = 1
            for j in range (len(i)):   
                prev = i[:j] + i [j+1:]
                if prev in dp : dp[i] = max (dp[i] , dp[prev] + 1)
        return max(dp.values())