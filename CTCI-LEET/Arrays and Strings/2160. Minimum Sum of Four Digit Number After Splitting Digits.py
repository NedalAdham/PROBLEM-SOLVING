class Solution:
    def minimumSum(self, num: int) -> int:
        x = list(str(num))
        x=sorted(x)
        return int(x[0]+x[2]) + int(x[1]+x[3])
      """  2498
        2489
        2  8
        4  9"""