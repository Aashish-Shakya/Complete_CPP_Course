#include <iostream>
using namespace std;

/*
Question -  HOLLOW DIAMOND INSCRIBED IN A RECTANGLE PATTERN

        *********
        **** ****
        ***   ***
        **     **
        *       *
        *       *
        **     **
        ***   ***
        **** ****
        **********

n = 5


Upper part

Lower part

10 - r
9 -c
*/

// Not able to understood have to check again

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;

    // My code
    int space = (2 * n - 1) / 2;
    // For upper part
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= n-i; j++)
        // OR
        for (int j = 1; j <= space; j++)
        {

            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= space; j++)
        {

            cout << "*";
        }

        cout << endl;
        space--;
    }
    // For Lower part
    space = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= space; j++)
        {

            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= space; j++)
        {

            cout << "*";
        }

        cout << endl;
        space++;
    }
}