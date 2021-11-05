
class fraction:
    """
        Fraction
        Num = a / b
    """
    def __init__(self, a, b):
        if b < 0:
            b *= -1
            a *= -1

        if b == 0:
            raise ZeroDivisionError()

        self.a = int(a)
        self.b = int(b)

    def rational_repr(self):
        return float(self.a) / float(self.b)

    def __str__(self):
        return f"{self.a} / {self.b}"
