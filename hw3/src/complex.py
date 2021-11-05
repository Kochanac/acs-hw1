import math


class complex:
    """
        Complex Number
        Num = a + b*i
    """
    def __init__(self, a, b):
        self.a = float(a)
        self.b = float(b)

    def rational_repr(self):
        return math.sqrt(self.a ** 2 + self.b ** 2)

    def __str__(self):
        if self.b > 0:
            return f"{self.a} + {self.b}i"
        else:
            return f"{self.a} - {abs(self.b)}i"
