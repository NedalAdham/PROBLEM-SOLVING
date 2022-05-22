class Solution:
    def frequencySort(self, s: str) -> str:
        count = collections.Counter(s)
        ret = ""
        l = list (count.items())
        l.sort(key=lambda x:x[1]  , reverse=True)
        x = len(count)
        for i in range (x):
            m = l[i]
            ret += m[0] * m[1]
        return ret


        