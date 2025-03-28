#include <iostream>
using namespace std;

/*Write a program for a simple calculator (using switch case)*/

int main()
{
    int a;
    int b;
    char op;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;

    cout << "Enter a operator " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition of " << a << " and " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction of " << a << " and " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication of " << a << " and " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << "Division of " << a << " and " << b << " = " << a / b << endl;
        break;
    case '%':
        cout << "Remainder of " << a << " and " << b << " = " << a % b << endl;
        break;

    default:
    cout << "Enter a valid operator" << endl;
        break;
    }

    return 0;
}
