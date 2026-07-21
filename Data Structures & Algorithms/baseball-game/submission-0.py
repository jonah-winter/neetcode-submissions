class Solution:
    def calPoints(self, operations: List[str]) -> int:
        score = []
        total = 0
        i = 0
        for op in operations:
            event = False
            if i > 0:
                prev = score[i - 1]
            if i > 1:
                prev2 = score[i - 2]
            if op == "D":
                score.append(int(prev) * 2)
                event = True
            if op == "C":
                score.pop()
                i -= 1
                event = True
            if op == "+":
                score.append(int(prev) + int(prev2))
                event = True
            if not event:
                score.append(int(op))
            if op != "C":
                i += 1
        for s in score:
            total += s
        return total
            