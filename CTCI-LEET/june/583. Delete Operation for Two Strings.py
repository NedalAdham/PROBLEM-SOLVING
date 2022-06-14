class Solution:
    def minDistance(self, s1: str, s2: str) -> int:
        m , n  = len (s1) , len(s2)
        if m*n == 0:
            return m+n
        
        dp = [[0]*(n+1) for _ in range(m+1)]
        for i in range (m+1):
            for j in range (n+1):
                if i == 0 : dp[i][j] = j 
                elif j == 0 : dp[i][j] = i 
                elif s1[i-1] == s2[j-1] : dp[i][j] = dp [i-1][j-1]
                else :
                    dell1 = dp [i-1][j]
                    dell2 = dp [i][j-1]
                    dp[i][j] =  min(dell1 , dell2) +1                
        return dp[m][n]
        