#include <iostream>
using namespace std;

/*
Question -    0-1 PATTERN
             1
             0 1
             1 0 1
             0 1 0 1
             1 0 1 0 1

n = 5

Rows = 1 to n
Coloumns = 1 to Row No.
Elements = if (coloumn No. + row no. is Even --> 1)
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((j + i) % 2 == 0)
            {
                cout << " 1";
            }
            else
            {
                cout << " 0";
            }
        }
        cout << endl;
    }
}