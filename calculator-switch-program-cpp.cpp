#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char op;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Operation
    switch (op) {
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Cannot divide by zero." << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
