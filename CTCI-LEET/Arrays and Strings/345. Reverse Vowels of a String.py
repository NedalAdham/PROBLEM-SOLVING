class Solution:
    def reverseVowels(self, s: str) -> str:
        V = []
        Vowels = "AEOUIaeoui"
        l = 0
        for i in s:
            if i in Vowels:
                V . append(i)
                s = s.replace(i , "*")
        V[:] = V[::-1]
        for K in s :
            if K =='*':
                s= s.replace(K , V[l] , 1 )
                l+=1
        return s