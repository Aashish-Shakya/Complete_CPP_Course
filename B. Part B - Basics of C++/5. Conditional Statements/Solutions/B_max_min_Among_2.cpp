#include <iostream>
using namespace std;

// Program to Maximun and Minimum among two numbers using if/else

int main()
{

    int num1, num2, max, min;
    cout << "Enter two numbers " << endl;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        max = num1;
        min = num2;
    }
    else if (num2 > num1)
    {
        max = num2;
        min = num1;
    }
    else
    {
        cout << "Both Are equal" << endl;
    }

    cout << "Maximun " << max << endl;
    cout << "Minimun " << min << endl;

    // Using ternanry operator
    num1 > num2 ? cout << "Max is " << num1 : cout << "Max is " << num2;
    return 0;
}