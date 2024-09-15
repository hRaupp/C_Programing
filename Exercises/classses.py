# Exercise: Rectangle Class
# Create a class called Rectangle that represents a rectangle.

# Requirements:
# The class must have two attributes:

# width
# height
# The class must have the following methods:

# A method to calculate the area of the rectangle.
# A method to calculate the perimeter of the rectangle.


class Retangulo:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def AreaCalculate(self):
        return self.height * self.width
    
    def PerimetroCalculate(self):
        return (self.height * 2) + (self.width * 2)


retangulinho = Retangulo(5, 2)
perimeter = retangulinho.PerimetroCalculate()
area = retangulinho.AreaCalculate()

print(perimeter)
print(area)
