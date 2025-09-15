# Program to check if a number is positive, negative or zero using nested if–else

# Input from user
num = int(input("Enter an integer: "))

# Nested if–else logic
if num >= 0:
    if num == 0:
        print("The number is zero.")
    else:
        print("The number is positive.")
else:
    print("The number is negative.")
