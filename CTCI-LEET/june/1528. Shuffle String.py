class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        return ''.join (X for _ , X in sorted ( zip (indices , s)))
    
    