
class Solution:
    def maxSatisfaction(self, satisfaction: List[int]) -> int:
        satisfaction.sort()
        satisfaction = deque(satisfaction)
        
        summ = sum(satisfaction)
        product = 0
        
        for i , num in enumerate(satisfaction):
            product += num * (i+1)
        
        while summ < 0 :
            product-=summ
            summ-=satisfaction.popleft()
            
        return max (0 , product)