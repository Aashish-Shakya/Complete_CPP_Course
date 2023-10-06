#include <iostream>
using namespace std;

/*
Question -   HALF NUMBERS PYRAMID INVERTED PATTERN    
            1 2 3 4 5
            1 2 3 4
            1 2 3
            1 2 
            1  
            
n = 5

Rows = 1 to n
Coloumns = n+1-Row No.
Elements = coloumn No.
*/
int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
//My code
    // for(int i =n; i>=1; i--){
    //     for(int j =1; j<=i ; j++){
    //         cout <<  j << " "  ;
    //     }
    //     cout << endl;
    // }

// Provided Solution
    for(int i =1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
}