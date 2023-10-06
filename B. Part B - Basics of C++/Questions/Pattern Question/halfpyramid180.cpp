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
// I am not able to solve it in first time- I watched video then did it
//Have to revise this again
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n-i)
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }

        cout << endl;
    }
}
