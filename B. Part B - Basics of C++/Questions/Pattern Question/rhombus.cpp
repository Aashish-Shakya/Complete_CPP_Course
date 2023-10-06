#include <iostream>
using namespace std;

/*
Question -   RHOMBUS PATTERN
             * * * * *
            * * * * * 
           * * * * * 
          * * * * *
         * * * * *   

n = 5

Rows = 1 to n
Coloumns = 1 to Row No.
Elements =  
Space - n to 1-row No.
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;
     
// My Code
    for(int i =n; i>=1; i--){
        for(int j=1; j<i; j++){
            cout << " ";
        }
        for(int k=1; k<=n; k++){
            cout << "* ";
        }
        cout << endl;
        // space--;
    }


// Provided code
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=n; k++){
            cout << "* ";
        }
        cout << endl;
        // space--;
    }
}