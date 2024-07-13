''' _________________Write a Python program to count the number 4 in a given list_________________'''

# Read the list of integers from user input
numbers = list(map(int, input("Enter comma-separated integers: ").split(',')))

# Print the length of the list using an f-string
print(f"The list contains {len(numbers)} elements")

# Read the number to search for from user input
number_to_search = input("Enter a number to search for: ")

# Count the number of occurrences of the number in the list
count_of_number = numbers.count(int(number_to_search))

# Print the number of occurrences using an f-string
print(f"The number {number_to_search} appears {count_of_number} times in the list")
