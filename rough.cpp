#include <iostream>
using namespace std;

// Find a raise to the power b -> a ke power b

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
      for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {

            cout << "* ";
        }

        cout << endl;
         
    }
    // For Lower part
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {

            cout << "* ";
        }

        cout << endl;
       
    }
    return 0;
}