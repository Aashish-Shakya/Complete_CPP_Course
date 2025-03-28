#include <iostream>
using namespace std;

/*
Question -   Sum of first n natural numbers
*/

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    int sum = 0;


    // Using For Loop
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

/*
    // Using While Loop
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
*/
    cout << "Sum is " << sum;

/*
    // We can do this by a formula
    // S = n(n+1)/2
    cout << (n * (n + 1)) / 2 << endl;

*/
    return 0;
}
