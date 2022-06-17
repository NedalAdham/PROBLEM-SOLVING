class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        #use matrix to easly use sum function
        
        N , M , count = len(mat) , len(mat[0]) , 0
        
        trans = list(zip(*mat))
        for i in range (N):
            for j in range (M):
                if mat[i][j] == 1 and sum(mat[i]) == 1 and sum(trans[j]) == 1:count+=1
        return count
        