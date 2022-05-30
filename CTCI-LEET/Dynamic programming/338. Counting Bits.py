def countSetBits(n):
        count = 0
        while (n):
            count += n & 1
            n >>= 1
        return count    
class Solution:
    def countBits(self, n: int) -> List[int]:
        dp = [ countSetBits(i) for i in range (n + 1)]
        return dp
        