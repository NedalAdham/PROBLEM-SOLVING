
class Solution:
    def longestPalindrome(self, s: str) -> str:
        def expand_concore_icame_isaw(left, right):
            while left >= 0 and right < n and s[left] == s[right]:
                left, right = left - 1, right + 1
            return left, right
        n, ans = len(s), 0
        for i in range(n):
            leftodd, rightodd = expand_concore_icame_isaw(i, i)
            lefteven, righteven = expand_concore_icame_isaw(i, i+1)

            if (rightodd - leftodd - 1) > ans:
                ans = rightodd - leftodd - 1
                result = s[leftodd+1: rightodd]

            if (righteven - lefteven - 1) > ans:
                ans = righteven - lefteven - 1
                result = s[lefteven+1: righteven]
        return result