class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        if len(s1) + len(s2) != len(s3) :return False
        @lru_cache(None)
        def cache (i , j) :

            if i == len (s1) and j == len (s2): return True 
            res = False 

            if i < len(s1) and s1[i] == s3[i+j] :
                res |= cache (i+1 , j)
            if j < len(s2) and s2[j] == s3[i+j] :
                res |= cache (i , j+1)
            return res
        return cache(0,0)
        
        