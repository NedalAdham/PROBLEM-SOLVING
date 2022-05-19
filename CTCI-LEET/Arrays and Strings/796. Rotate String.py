def leftrotate(s, d):
    tmp = s[d:] + s[0: d]
    return tmp

class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        for i in range (len(s)):
            if (s == goal) : return True
            else : s = leftrotate(s , 1)
            
        return False