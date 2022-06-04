
#help => https://www.youtube.com/watch?v=Ph95IHmRp5M&ab_channel=NeetCode
class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        col = set()
        posdio = set() #(r+c)
        negdio = set() #(r-c)

        res = []
        board = [["."] * n for i in range (n)]
        def backtrack (r):#row by row base case
            if r == n :
                copy = ["".join (row)for row in board]
                res.append(copy)
                return

            for c in range(n):
                if c in col or (r+c) in posdio or (r-c) in negdio:
                    continue
                col.add(c)
                posdio.add(r + c)
                negdio.add(r - c)
                board[r][c] = "Q"

                backtrack(r+1)

                #backtracking undo
                col.remove(c)
                posdio.remove(r + c)
                negdio.remove(r - c)
                board[r][c] = "."

        backtrack(0)
        return res

