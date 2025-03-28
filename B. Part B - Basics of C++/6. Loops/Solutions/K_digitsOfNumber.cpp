#include <iostream>
using namespace std;

/*
Question -> Write a program to print all the digits of a positive number from right to left

*/

// Have to go through once again
int main()
{
    int n ;
    cout << "Enter number" << endl;;
    cin >> n;
 

    while (n > 0)
    {
        int rem = n % 10;
      
          cout << rem << endl;;
        n = n / 10;
    }

    return 0;
}
