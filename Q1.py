#Practice Statement: Write a program to print "Welcome to Talent Battle" on the output screen.

print("Welcome to Talent Battle")

#""Day 1 coding Statement: Write a program to identify if the character is a vowel or consonant"".

alphabet = input("Enter a alphabet: ").upper()          #taking input from user and coverting its response to uppercase 

if len(alphabet) ==1 and alphabet.isalpha():        # checking if alphabet is single char and is aplha or not

    if alphabet in "a,e,i,o,u":
        print("This is a vowel")

    else :
        print("Its a consonent")
else :
    print("Invalid input")










print("Enter a character")
ch = input () .upper()

if ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' :
    print("Vowel")

elif ch>='a' or ch<='z':
    print("Consonent")
else:
    print("Invalid ")