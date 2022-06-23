class Solution:
    def minimumLengthEncoding(self, words: List[str]) -> int:
        valid = set (words)
        for X in words :
            for i in range(1 , len (X)):
                valid.discard(X[i:])
        return sum ( len(word) + 1 for word in valid)
        