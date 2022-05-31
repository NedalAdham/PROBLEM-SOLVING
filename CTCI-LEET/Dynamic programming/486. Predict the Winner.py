class Solution:
    def PredictTheWinner(self, p: List[int]) -> bool:
        n = len(p)
        dp = [[0] * n for _ in range(n)]
        for s in range (n):
            for i in range (n-s):
                j = i + s
                if i == j : dp [j][j] = p[i]
                else  : dp[i][j] =  max (p[i] - dp[i+1][j]  , p[j]- dp[i][j-1])                   
        return dp[0][-1] >= 0
        