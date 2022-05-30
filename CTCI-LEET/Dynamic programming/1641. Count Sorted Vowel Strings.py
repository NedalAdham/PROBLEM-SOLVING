from math import comb
class Solution:
    def countVowelStrings(self, n: int) -> int:
        return math.comb (n+4 , 4)#4 since ea 
        