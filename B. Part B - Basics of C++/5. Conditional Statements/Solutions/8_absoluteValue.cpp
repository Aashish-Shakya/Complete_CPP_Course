#include <iostream>
using namespace std;

// Write a program tom print absolute value of the number entered by a user.
int main()
{
    int num;
    cout << "Enter a number" <<endl;
    cin>>num;
    
    if(num>=0){
        cout << num;
    }else{
        cout << num*(-1);
    }
 
}