from typing import List
from math import log10


def digitize(x):
    n = int(log10(x))
    for i in range(n, -1, -1):
        factor = 10 ** i
        k = x // factor
        yield k
        x -= k * factor


def listToString(s):
    # initialize an empty string
    str1 = ""

    # return string
    return (str1.join(s))


class Solution:

    def compress(self, chars) :
        l = len(chars)
        s = []
        j = 0
        for i in range(l):
            if i == 0:
                s.append(chars[0])
            else:
                if chars[i] == chars[i - 1]:
                    j += 1
                    if i == (l - 1) :
                        x = str(j + 1)
                        if j != 0: s.append(x)
                        #s.append(chars[i])
                        j = 0




                else:
                    x = str(j + 1)
                    if j != 0: s.append(x)
                    s.append(chars[i])
                    j = 0

        """if len(s) != 1:
            num = j + 1
            x = [int(a) for a in str(num)]
            s.append(x)"""

        s = [str(item) for sublist in s for item in sublist]
        s = listToString(s)
        chars.clear()
        for i in range(len(s)):
            chars.append(str(s[i]))
        return len(chars)