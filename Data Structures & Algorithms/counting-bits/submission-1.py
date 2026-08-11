class Solution:
    def countBits(self, n: int) -> List[int]:
        fin = []
        temp: int = 0
        if n == 0:
            fin.append(0)
        else:
            fin.append(0)
            fin.append(1)
        for i in range(2, n + 1):
            fin.append(fin[i // 2] + (i & 1))
        return fin