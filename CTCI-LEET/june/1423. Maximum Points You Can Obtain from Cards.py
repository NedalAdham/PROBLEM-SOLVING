class Solution:
    def maxScore(self, cardPoints, k: int) :
        pre = [0] + list(accumulate(cardPoints))
        suf = [0] + list(accumulate(cardPoints[::-1]))
        maa = []
        [maa.append(pre[i] + suf[k - i]) for i in range(k + 1)]
        return max(maa)
"""X = Solution()
cardPoints = [1,2,3,4,5,6,1]
k = 3
print(X.maxScore(cardPoints,k))"""