#include <iostream>
using namespace std;

/*
6. Print the first multiple of 5 which is also a multiple of 7
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