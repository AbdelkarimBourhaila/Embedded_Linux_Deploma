"""_____________Write a Python program which accepts the radius of a circle from the user and compute the area___________"""

import math

# Gdet the radius
x = float(input("Write the radius r : ").strip())

# Calculate the area
area = math.pi * (x ** 2)

# Print the result
print("The area of the circle is : ", area)