#include <iostream>
using namespace std;

/*
Question - Print the INVERTED Triangle/Half Pyramid pattern using loops and take input from user
 
        * * * * *
        * * * *
        * * *
        * *
        *
1 to n-rows +1

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
