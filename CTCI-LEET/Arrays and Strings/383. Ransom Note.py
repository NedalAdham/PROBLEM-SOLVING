from itertools import permutations
class Solution:
    def canConstruct(self, r: str, m: str) -> bool:  
        for i in set(r):
            if r.count(i) > m . count(i):
                return False
        
        return True
        