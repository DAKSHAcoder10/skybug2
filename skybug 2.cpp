
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    if (op == '+') cout << "Result: " << num1 + num2;
    else if (op == '-') cout << "Result: " << num1 - num2;
    else if (op == '*') cout << "Result: " << num1 * num2;
    else if (op == '/') {
        if (num2 != 0) cout << "Result: " << num1 / num2;
        else cout << "Error! Division by zero.";
    }
    else cout << "Invalid operation.";

    return 0;
}



