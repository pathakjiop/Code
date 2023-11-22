#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter an operator you want (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Error: Division by zero" << endl;
            return 1; // Exit with an error code
        }
    } else {
        cout << "Error: Invalid operator" << endl;
        return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}
