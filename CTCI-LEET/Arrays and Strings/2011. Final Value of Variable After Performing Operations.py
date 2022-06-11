class Solution:
    def finalValueAfterOperations(self, oX: List[str]) -> int:
        summ = sum(("+" in o )- ("-" in o) for o in oX)
        return summ
        