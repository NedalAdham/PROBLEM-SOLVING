
val = -1
(M, N) = (502, 502)
dp = [[val] * N] * M

def helpp (i , j , p ):
    if (i > j):return 0
    #if (dp[i][j] != -1): return dp[i][j]

    
    return 

        

class Solution:

    def stoneGame(self, p: List[int]) -> bool:
        n = len(p)
        dp = [[0] * n for _ in range(n)]
        for s in range (n):
            for i in range (n-s):
                j = i + s
                if i == j : dp [j][j] = p[i]
                else  : dp[i][j] =  max (p[i] - dp[i+1][j]  , p[j]- dp[i][j-1])
            
                                         
                                         
        return True
        # alice always wins => return True
        
        
        
        