#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator you want(+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero\n");
            return 1; // Exit with an error code
        }
    } else {
        printf("Error: Invalid operator\n");
        return 1; // Exit with an error code
    }

    printf("Result: %lf\n", result);

    return 0;
}
