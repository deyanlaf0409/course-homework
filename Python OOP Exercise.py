import math
class Triangle: # miss docstring
    def __init__(self, a, b, c):
        self.__a = a
        self.__b = b
        self._c = c

    @property
    def a(self):
        return self.__a

    @a.setter
    def a(self, value):
        if value <= 0:
            raise ValueError("Invalid value for a")
        self.__a = value

    @property
    def b(self):
        return self.__b

    @b.setter
    def b(self, value):
        if value <= 0:
            raise ValueError("Invalid value for b")
        self.__b = value
# Where are getter and setter for c?
    def area(self):
        # miss docstring
        s = (self.__a + self.__b + self._c) / 2 # directly use self.a, self.b
        return math.sqrt(s * (s - self.__a) * (s - self.__b) * (s - self._c)) # alsoo, directly use getters

    def __str__(self):
        return f"{self.__a}, {self.__b}, {self._c}"

tr1 = Triangle(3, 4, 5)
area = tr1.area()
print(area)

