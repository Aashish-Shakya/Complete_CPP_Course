#include <iostream>
#include <math.h>
using namespace std;

/*
Question -> Write a program to check if a given number is Armstrong number or not.

let a = 153;
then a = 1^3 + 5^3 +3^3 = 153
Then it is called Armstrong number

*/

// Have to go through once again
int main()
{
    int n;
    cout << "Enter number" << endl;
    ;
    cin >> n;
    int sum = 0;
    int originalN = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);

        n = n / 10;
    }
    cout << sum;
    if (sum == originalN)
    {
        cout << " Armstrong Number" << endl;
    }
    else
    {
        cout << "Not a armstrong Number" << endl;
    }

    return 0;
}
