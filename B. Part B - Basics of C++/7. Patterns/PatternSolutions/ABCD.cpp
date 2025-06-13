#include <iostream>
using namespace std;

/*
ABCD
ABCD
ABCD
ABCD
*/
using namespace std;
int main()
{
    int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n ; j++)
    //     {

    //         cout << char(j + 65) ;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 65; j <= n+65 ; j++)
    //     {

    //         cout << char(j) ;
    //     }
    //     cout << endl;
    // }
    
    for (int i = 0; i <n; i++)
    {
        char ch = 'A';
       for (int j = 0; j < n ; j++)
        {

            cout << ch ;
            ch = ch+1;
        }
        cout << endl;
    }

    return 0;
}