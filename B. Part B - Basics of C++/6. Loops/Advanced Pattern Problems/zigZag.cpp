#include <iostream>
using namespace std;

// Difficult one dekhe kiya
/*
Question -  SZIG ZAG PATTERN

        |
        |
        |
        |  *   *   
        | * * * *
        |*   *   *
        |________________________________-



        
n = 9
Rows = 1 to 3
Columns =
    "*" ==> R =2 & C%4=0 || (R+C)%4 = 0
    " " ==> else mai
 
         
*/

int main()
{

    int n;
    cout << "Enter number" << endl;
    cin >> n;

    // My code
    for(int i =1; i<=3; i++){
        for(int j=1; j<=n; j++){

            if(((i+j) % 4 ==0) || (i==2 && j%4==0) ){
                cout << "* ";
            }else{

            cout << "  ";
            }
        }
         
        cout << endl;
    }
}
