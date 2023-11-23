/*
Q5 - write a program to calculate the sum of digits of a 3 digit number.

*/
#include <iostream>
using namespace std;
int main()
{
    int n, first, second, third, sum;
    n = 524;

    first = n / 100;
    n = n % 100;
    second = n / 10;
    third = n % 10;
    sum = first + second + third;
    cout << "sum of 3 digits is: " << sum << endl;
    return 0;
}