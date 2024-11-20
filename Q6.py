#Day 6 coding Statement:  Write a program to find the Quadrants in which coordinates lie

X_cooorinate =int(input("Enter 1st Coordinate: "))
Y_coordinate =int(input("Enter 2nd Coordinate: "))

if X_cooorinate > 0 and Y_coordinate > 0 :
    print("It is in 1st Quadrant")

elif X_cooorinate < 0 and Y_coordinate > 0 :
    print("It is in 2nd Quadrant")
if X_cooorinate < 0 and Y_coordinate < 0 :
    print("It is in 3rd Quadrant")
if X_cooorinate > 0 and Y_coordinate < 0 :
    print("It is in 4th Quadrant")
