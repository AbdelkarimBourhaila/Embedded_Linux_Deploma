'''Write a Python program to test whether a passed letter is a vowel or not'''

# Read the onput
x = input("Write a letter please : ").lower().strip()

# Define the vowels list
vowels = ['a', 'e', 'i', 'o', 'u']

# Display result
print(f"{x} is a vowel") if x in vowels else print(f"{x} is not vowel")