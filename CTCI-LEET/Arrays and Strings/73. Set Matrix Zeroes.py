import sys


class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        maxSize = sys.maxsize
        mymat = [[maxSize] * (len(matrix)) for _ in range(len(matrix[0]))]

        cols = []
        for i in range(len(matrix)):
            for j  in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    cols.append([i,j])


        while cols :
            i,j = cols.pop()

            matrix [i] = [0] * (len(matrix[0]))
            for x in range(len(matrix)):
                matrix[x][j] = 0
                
            
            