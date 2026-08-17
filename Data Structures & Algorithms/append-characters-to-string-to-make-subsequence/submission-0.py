class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        ind: int = 0
        for c in s:
            if ind < len(t):
                if c == t[ind]:
                    ind += 1
        return len(t) - ind