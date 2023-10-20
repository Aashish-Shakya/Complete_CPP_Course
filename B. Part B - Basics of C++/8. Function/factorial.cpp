#include <iostream>
#include <math.h>
using namespace std;

// Fibonacci -> 0,1,1,2,3,5,8

// Next term is sum of previous two terms

 
int factorial(int n)
{
    int fact = 1;
    cout << "5! = ";
    for (int i = n; i >= 1; i--)
    {

        cout << i << "*";
        fact *= i;
    }
    cout << " = " ;
    return fact;
}

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int ans = factorial(n);
    cout  << ans << endl;
    return 0;
}