# transpose then swap
from typing import List
def rotate_matrix( mat ):
    N = len(mat)
    for i in range(N):
        for j in range(i):
            temp = mat[i][j]
            mat[i][j] = mat[j][i]
            mat[j][i] = temp
    for i in range(N):
        for j in range(N // 2):
            temp = mat[i][j]
            mat[i][j] = mat[i][N - j - 1]
            mat[i][N - j - 1] = temp
class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
         #matrix.clear()
         matrix = rotate_matrix(matrix)


