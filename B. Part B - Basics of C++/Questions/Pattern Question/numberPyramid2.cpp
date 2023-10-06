#include <iostream>
using namespace std;

/*
Question -  Number PYRAMID PATTERN -2
            1
           1 2
          1 2 3   
         1 2 3 4 
        1 2 3 4 5 

n = 5

Rows = 1 to n
Coloumns  
    * Elements = 1 to Row no
    * Space = n-ROW NO. 
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;
  



    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << k << " ";
        }
        cout << endl;
        // space--;
    }
}