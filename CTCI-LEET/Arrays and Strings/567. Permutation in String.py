# store the frequency of occurence of characters
#import numpy as np
import collections
class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        s1_counter = collections.Counter(s1)
        s1len = len(s1)
        for i in range (len(s2) - s1len + 1):
            if collections.Counter(s2[i:i + s1len]) == s1_counter:
                return True
        return False
