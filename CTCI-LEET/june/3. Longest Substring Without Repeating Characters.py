class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        oneset = set(s)
        if len(oneset) == 1: return 1
        if s == "": return 0
        x = set()
        l = 0
        maxs = []
        for i in range(len(s)):
            while s[i] in x :
                x.remove(s[l])
                l+=1
            x.add(s[i])
            maxs . append(i-l+1)

        return max(maxs)

        