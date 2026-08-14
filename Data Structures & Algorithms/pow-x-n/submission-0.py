class Solution:
    def myPow(self, x: float, n: int) -> float:
        if not n:
            return 1
        useN = n
        if n < 0:
            x = 1 / x
            useN = -n
        power = useN
        prod = 1.0
        base = x
        while power > 0:
            if power % 2 == 1:
                prod *= base
            base *= base
            power //= 2
        return prod