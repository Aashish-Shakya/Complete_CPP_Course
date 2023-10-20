/*
Write a program to calculate marks to grades . Follow the conversion rule as given below
100 – 90 - A+
90 – 80 - A
80 – 70 - B+
70 – 60 - B
60 – 50 - C
50 – 40 - D
40 – 30 - E
30 – 0 -  F

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float marks, grade;
    cout << "Enter marks" << endl;
    ;
    cin >> marks;

    grade = ceil(marks / 10);

    switch (int(grade))
    {
    case 10:
        cout << " Your grade is A+";
        break;
    case 9:
        cout << " Your grade is A";
        break;
    case 8:
        cout << " Your grade is B+";
        break;
    case 7:
        cout << " Your grade is B";
        break;
    case 6:
        cout << " Your grade is C";
        break;
    case 5:
        cout << " Your grade is D";
        break;
    case 4:
        cout << " Your grade is E";
        break;

    case 3:
        cout << " Your grade is F";
        break;
    case 2:
        cout << " Your grade is F";
        break;
    case 1:
        cout << " Your grade is F";
        break;

    default:
        cout << " Enter valid marks";
        break;
    }

    return 0;
}