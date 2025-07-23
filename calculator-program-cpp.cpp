#include <iostream>
using namespace std;

int main() {
    float a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    if (operation == '+')
        cout << "Result: " << a + b;
    else if (operation == '-')
        cout << "Result: " << a - b;
    else if (operation == '*')
        cout << "Result: " << a * b;
    else if (operation == '/')
        cout << "Result: " << a / b;
    else
        cout << "Invalid operator";

    return 0;
}
