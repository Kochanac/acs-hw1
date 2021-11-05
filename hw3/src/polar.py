
class polar:
    """
        Polar Coordinates
        a - angle
        b - length
    """
    def __init__(self, a, b):

        self.a = float(a)
        self.b = float(b)

    def rational_repr(self):
        return self.b

    def __str__(self):
        return f"({self.a}; {self.b})"
