class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if not digits:
            return [1]
        cnt: int = 0
        copy: list = digits
        fin: list = []
        copy[-1] += 1
        for i in copy[::-1]:
            j = i
            if cnt > 0:
                j += 1
                cnt -= 1
            if j >= 10:
                j -= 10
                cnt += 1
            fin.append(j)
        if cnt > 0:
            fin.append(1)
        return fin[::-1]