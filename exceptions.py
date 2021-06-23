import sys

try:
    x = int(input("Enter number: "))
    y = int(input("Enter second number: "))
except ValueError:
    print("Invalid input")
    sys.exit(1)
try:
    result = x / y
except ZeroDivisionError:
    print("Error cannot devide by Zero")
    sys.exit(1)

print(f"{x} / {y} is equal to {result}")
