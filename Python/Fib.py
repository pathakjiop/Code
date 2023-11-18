def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib_series = fibonacci(n - 1)
        fib_series.append(fib_series[-1] + fib_series[-2])
        return fib_series

# Get user input for the number of terms
num_terms = int(input("Enter the number of Fibonacci terms to generate: "))

# Print the Fibonacci series
result = fibonacci(num_terms)
print("Fibonacci series up to",num_terms,"terms:-",result)
