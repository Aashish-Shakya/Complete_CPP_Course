#include <iostream>
using namespace std;

/*
Question -  SQUARE STAR PATTERN OR DIAMOND PATTERN

                *
              * * *
            * * * * *
          * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *
n = 4


Upper part
    Rows = 1 to n
    Coloumns
        " "  = 1 to n-Row no.
        * = 1 to 2*Row No -1
         

Lower part
    Rows = n to 1
    Coloumns
        " "  = 1 to n-Row no.
        * = 1 to 2*Row No -1
         
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;

    // My code
    // For upper part
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
}