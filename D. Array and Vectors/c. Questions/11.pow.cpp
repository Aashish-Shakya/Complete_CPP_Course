#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
Calculate Pow(X,n)
x^n

// My code - It is not optimized way - TC - O(n)
double power(double x, int n)
{
    double ans = 1.0;
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            ans = ans * x;
        }
    }
    else
    {
        for (int i = n; i < 0; i++)
        {
            ans = ans / x;
        }
    }
    return ans;
}

int main()
{
    double x = 2.1;
    int n = 3;

    double ans = power(x, n);
    cout << ans;

    return 0;
}
*/

/*
Binary Exponentiation
- We will convert power to binary form
No of digit in Binform of power = Logn + 1 -->  That means TC reduces to O(logn)

by doing this the number of iteration will reduce to no of digits in binForm of power;
*/
int main()
{
    double x = 2;
    int n = -2;

    long binForm = n;

    // For -ve powers
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    double ans = 1;

    // For +ve powers
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans = ans * x;
        }

        x = x * x;
        binForm = binForm / 2;
    }
    cout << ans;

    return 0;
}