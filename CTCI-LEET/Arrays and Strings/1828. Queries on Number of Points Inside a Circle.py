class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        res=[]
        for x , y , r in queries:
            tot = 0
            for xpoint , ypoint in points :
                dist = (sqrt(   ((xpoint - x)**2) + ((ypoint - y)**2 ) ) )
                if dist <= r :tot+=1
            res.append(tot)
        return res