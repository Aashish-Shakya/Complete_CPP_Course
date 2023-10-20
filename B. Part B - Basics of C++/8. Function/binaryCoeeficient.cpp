#include <iostream>
#include <math.h>
using namespace std;

// Binary Coefficient == nC^r
 // nC^r == n! / (n-r)! * r!
 

// Not able to create logic by own
int factorial(int n)
{
    int fact = 1;
    
    for (int i = n; i >= 1; i--)
    {

        
        fact *= i;
    }
    
    return fact;
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n ;
    int r ;
    cout << "Enter r" << endl;
    cin >> r ;
     
     int ans = factorial(n)/ (factorial(r)* factorial(n-r));
     cout << "nCr = " << ans <<endl;

    



    return 0;
}