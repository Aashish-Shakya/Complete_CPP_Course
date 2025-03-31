#include <iostream>
using namespace std;

/*
8. Sum of all numbers from **1 to n** divisible by 3  
*/

int main()
{
    int n = 100;
    int sum  = 0;
 
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0)
        {
            sum  += i;
        }
 
    cout << "  sum " << sum << endl;
 
}
}