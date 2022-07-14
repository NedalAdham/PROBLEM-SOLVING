class Solution:
    def maxArea(self, h: int, w: int, horizontalCuts, verticalCuts) :
        horizontalCuts.insert(0,0)
        verticalCuts.insert(0,0)
        verticalCuts.append(w)
        horizontalCuts.append(h)
        verticalCuts.sort()
        horizontalCuts.sort()

        h_diff = 0
        w_diff = 0

        for i in range(0 ,len(horizontalCuts) - 1 ):
            h_diff = max(h_diff , abs(horizontalCuts[i+1] - horizontalCuts[i]))
        for i in range(0, len(verticalCuts) - 1):
            w_diff = max(w_diff, abs(verticalCuts[i + 1] - verticalCuts[i]))

        return h_diff * w_diff % (10**9+7)
