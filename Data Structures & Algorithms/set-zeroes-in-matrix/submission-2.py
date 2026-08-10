class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        m, n = len(matrix), len(matrix[0])
        markedRows = set()
        markedCols = set()
        for r in range(m):
            for c in range(n):
                if matrix[r][c] == 0:
                    markedRows.add(r)
                    markedCols.add(c)
        for r in markedRows:
            matrix[r] = [0] * n
        for c in markedCols:
            for r in range(m):
                matrix[r][c] = 0
        return