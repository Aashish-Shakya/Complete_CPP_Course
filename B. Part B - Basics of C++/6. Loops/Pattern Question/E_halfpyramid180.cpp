#include <iostream>
using namespace std;

/*
Question -   HALF PYRAMID PATTERN AFTER 180* ROTATION
                *
              * *
            * * *
          * * * *
        * * * * *

n = 5
*/

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    // My Code

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {

            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << endl;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j <= n-i)
    //         {
    //             cout << "   ";
    //         }
    //         else
    //         {
    //             cout << " * ";
    //         }
    //     }

    //     cout << endl;
    // }
}
