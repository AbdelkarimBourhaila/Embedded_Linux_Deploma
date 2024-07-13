"""____________________Print the calendar of a given month and year______________________"""

from calendar import month

# Get the year and month from the user
myYear = int(input("Choose the year please : ").strip())
myMonth = int(input("Choose the month please : ").strip())

# Print the calendar for the given month and year
print(month(myYear, myMonth))
