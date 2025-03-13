#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0, b = 1;
    cout << a << " " << b << " "; // Print first two numbers

    for (int i = 2; i < n; i++)  // Loop runs n-2 times
    {
        int sum = a + b;
        cout << sum << " ";  
        a = b;
        b = sum;
    }
    return 24;
}

int main()
{
    int n = 8;  // Number of terms
    cout << fibonacci(n);
    return 0;
}
