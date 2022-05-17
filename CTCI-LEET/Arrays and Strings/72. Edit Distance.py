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
                    insert = dp[i][j-1]
                    dell = dp [i-1][j]
                    replace = dp[i-1][j-1]
                    dp[i][j] = 1 + min (replace , dell , insert)
                    
                    
        return dp[m][n]
                     
                    