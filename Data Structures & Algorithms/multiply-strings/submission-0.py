class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        numshash: dict = {}
        if num1 == "0" or num2 == "0": return "0"
        intnum1: int = 0
        intnum2: int = 0
        for i in range(0, 10):
            numshash[str(i)] = i
        for i, n in enumerate(num1[::-1]):
            intnum1 += numshash[n] * 10 ** i
        for i, n in enumerate(num2[::-1]):
            intnum2 += numshash[n] * 10 ** i
        print(intnum1, intnum2)
        return str(intnum1 * intnum2)