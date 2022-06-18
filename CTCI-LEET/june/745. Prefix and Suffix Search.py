class Node:
    def __init__(self):
        self.children = {}
        self.maxindex = 0

class WordFilter:
    def __init__(self, words):
        self.root = Node()
        for i , word in enumerate(words):
            newword = word + "$" + word
            for j in range (len (word)):
                cur = self . root
                for k in range (j , len(newword)):
                    c = newword[k]

                    if c not in cur . children :
                        cur.children[c] = Node()
                    cur = cur . children[c]
                    cur.maxindex = i
    def f(self, prefix: str, suffix: str) :
        cur = self  . root
        search = suffix + "$" + prefix
        
        for c in search :
            if c not in cur . children:return -1
            cur = cur.children[c]
        return cur . maxindex

# Your WordFilter object will be instantiated and called as such:
obj = WordFilter(words)
param_1 = obj.f(prefix,suffix)