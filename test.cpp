#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
Calculate Pow(X,n)
x^n
*/

// My code
int power(double x, int n)
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
    double x = 2;
    int n = -2;

    double ans = power(x, n);
    cout << ans;

    return 0;
}
