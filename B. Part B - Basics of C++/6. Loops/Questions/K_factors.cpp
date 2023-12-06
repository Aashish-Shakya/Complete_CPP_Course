#include <iostream>
using namespace std;

/*
Question ->Write a program to display all factors of a number

*/

int main()
{
    int n ;
    cout << "Enter a number" << endl;
    cin >> n;
    
    for(int i=1;i<=n ;i++){
        if(n%i == 0){
            cout << i << endl;
        }else{
            continue;
        }
    }
}