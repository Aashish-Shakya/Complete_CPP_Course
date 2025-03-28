#include <iostream>
using namespace std;

/*
Question -   HALF PYRAMID PATTERN  using numbers
            1
            1 2
            1 2 3
            1 2 3 4
            1 2 3 4 5
            
n = 5
*/

int main(){
    int n;
    cout << "Enter number" << endl;
    cin >> n;
   
    for(int i =1; i<=n;i++){
        for(int j=1; j<=i ; j++){
            cout << i <<" "  ;
        }
        cout << endl;
    }
}