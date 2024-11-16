#Day 3 coding Statement: Write a program to find ASCII values of a character


char = input("Enter a character whose Ascii value you seek: ")

ascii_value = ord(char)        # ord function is used to get the ascii value for any character in python.

print(f"The Ascii value of this character is: {ascii_value}")