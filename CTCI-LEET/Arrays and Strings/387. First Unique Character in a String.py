
class Solution(object):
    def firstUniqChar(self, s):
        count = collections.Counter(s)
        for lol , i in enumerate(s):
            if count[i] == 1:return lol
        return -1
        
