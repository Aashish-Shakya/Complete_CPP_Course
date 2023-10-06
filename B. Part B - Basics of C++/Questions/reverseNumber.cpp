#include <iostream>
using namespace std;

/*
Question -> Write a program to reverse a number
1234 --> 4321
Also remove trailing zeroes
For exapmle
100020 --> 20001

*/

// Have to go through once again
int main()
{
    int n ;
    cout << "Enter number" << endl;;
    cin >> n;
    int reversedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        if(lastDigit == 0){
            lastDigit = n/10;
        }
        reversedNumber = reversedNumber * 10 + lastDigit;
        n = n / 10;
    }
    cout << reversedNumber << endl;;

    return 0;
}
