operator = input("Enter an operator you want (+, -, *, /): ")
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

if operator == '+':
    result = num1 + num2
elif operator == '-':
    result = num1 - num2
elif operator == '*':
    result = num1 * num2
elif operator == '/':
    if num2 != 0:
        result = num1 / num2
    else:
        print("Error: Division by zero")
        exit(1)  # Exit with an error code
else:
    print("Error: Invalid operator")
    exit(1)  # Exit with an error code

print("Result:", result)
