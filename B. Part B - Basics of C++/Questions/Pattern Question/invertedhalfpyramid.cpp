#include <iostream>
using namespace std;

/*
Question - INVERTED HALF PYRAMID PATTERN
        * * * * *
        * * * *
        * * *
        * *
        *
n = 5
*/

int main()
{
    int n;
     cout << "Enter a number" << endl;
     cin >> n;
//My code
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= i; j--)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
      
    // }

//Provided solution
    for(int i=n;i>=1;i--){
        for(int j=1 ; j<=i ; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
