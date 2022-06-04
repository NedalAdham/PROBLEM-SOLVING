class NumMatrix:
    def __init__(self, matrix: List[List[int]]):
        self.matrix = matrix
        self . arr = [[0] * (len(matrix[0])+1) for _ in range(len(matrix)+1)]
        for row in range (len(self.arr) -1):
            for col in range(len(self.arr[0]) - 1):
                self.arr[row + 1] [col + 1] = self.arr[row+1][col] + self.arr[row][col + 1] + matrix[row][col] - self.arr [row][col]
        
        
    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        
        return self.arr[row2+ 1][col2+1] -self. arr[row1] [col2+1] -self.arr[row2 + 1][col1] + self.arr[row1][col1]