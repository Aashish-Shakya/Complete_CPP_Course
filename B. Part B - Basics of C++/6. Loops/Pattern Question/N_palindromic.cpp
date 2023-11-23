#include <iostream>
using namespace std;

/*
Question -  PALINDROMIC PATTERN
Actual Pattern yai hai
            1
           212
          32123   
         4321234 
        543212345 

   After adding spaces yai hai
            1
          2 1 2
        3 2 1 2 3   
      4 3 2 1 2 3 4 
    5 4 3 2 1 2 3 4 5 


n = 5

Rows = 1 to n 
Coloumns  
    " "  = 1 to n-Row no
    k=Row No. , K-- , n-Row No. to n
    k=2 , k++ , n to n+row no -1
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;
  


// My code
    
    for (int i = 1; i <=n ; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout <<" ";
        }
    
        for (int j = i; j >= 1; j--)
        {
            cout <<j;
        }
        for (int j = 2; j <= i; j++)
        {
            cout <<j;
        }
        cout << endl;
    }

// Provided  code - Its little bit confusing not able to understand
    // for(int i=1; i<=n; i++){
    //     int j;
    //     for(j=1; j<=n-i; j++){
    //         cout << "  ";
    //     }
    //     int k=i;
    //     for(; j<=n; j++){
    //         cout << k-- << " ";
    //     }
    //     k = 2;
    //     for(; j<=n+i-1; j++){
    //         cout << k++ << " ";
    //     }
    //     cout << endl;
    //     // space--;
    // }
}