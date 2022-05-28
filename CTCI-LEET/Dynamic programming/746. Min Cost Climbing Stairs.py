class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        n = len(cost)
        fir = cost[0]
        sec = cost[1]
        if (n <= 2) : 
            return min (fir , sec)
        
        for i in range (2 , n ):
            curr = cost [i] +min (fir  , sec )
            fir = sec
            sec = curr
        return min (fir , sec)