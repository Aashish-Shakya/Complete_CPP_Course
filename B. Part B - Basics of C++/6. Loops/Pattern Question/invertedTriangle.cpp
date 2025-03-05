#include <iostream>
using namespace std;

/*
1111
 222
  33
   4
*/
using namespace std;
int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)

    {
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j <= n-i ; j++)
        {
            cout << i;
        }

        cout << endl;
    }
    return 0;
}