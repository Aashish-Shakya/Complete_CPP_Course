#include <iostream>
using namespace std;

/*
Question -> Write a program to create a basic calculator

*/

// Have to this update for case 5 if user enter 5 then directly exit no need to enter numbers
int main()
{
    
    int choice;
    float num1, num2;
  
    cout << "Menu of the calculator" << endl;
    cout << "1 -> ADDITION" << endl;
    cout << "2 -> SUBTRACTION" << endl;
    cout << "3 -> MULTIPLICATION" << endl;
    cout << "4 -> DIVISION" << endl;
    cout << "5 -> EXIT" << endl;
    cout << "------------------" << endl;
    cout << "Please enter your choice" << endl;
    cin >> choice;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;

    switch (choice)
    {

    case 1:
        cout << num1 + num2 << endl;
        break;
    case 2:
        cout << num1 - num2 << endl;
        break;
    case 3:
        cout << num1 * num2 << endl;
        break;
    case 4:
        cout << num1 / num2 << endl;
        break;
    case 5:

        break;

    default:
        cout << "Please enter vald choice" << endl;
        break;
    }

    // Given Solution
/* 
    char choice;
    int num1,num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
      cout << "Enter operator" << endl;
    cin >> choice;
    switch (choice)
    {

    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    case '%':
        cout << num1 % num2 << endl;
        break;

    default:
        cout << "Please enter vald choice" << endl;
        break;
    }
    return 0;
}

*/
