#include <iostream>
using namespace std;

/*
Program to check if a traingle is scalene. isosceles or equilateral.

Scalene - All sides a re unequal
a != b != c
Isosceles - Any two sides are equal
a=b or b=c or c=a
Equilateral - All three are qequal
a=b=c


*/

int main()
{
    int s1, s2, s3;
    cout << "Enter three sides of a triangle " << endl;
    cin >> s1 >> s2 >> s3;

    if (s2 == s3 && s1 == s3)
    {
        cout << "Equilateral" << endl;
    }
    else if (s1 == s2 || s1 == s3 || s3 == s2)
    {
        cout << "Isosceles" << endl;
    }

    else
    {
        cout << "Scalene" << endl;
    }
    return 0;
}