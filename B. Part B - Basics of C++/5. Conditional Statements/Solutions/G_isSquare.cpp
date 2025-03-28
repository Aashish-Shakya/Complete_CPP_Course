#include <iostream>
using namespace std;

// Write a program which takes len and breadth from user and check if it is a square or not.
int main()
{
    int len,brdth;
    cout << "Enter Lenght" <<endl;
    cin>>len;
    cout << "Enter Breadth" <<endl;
    cin>>brdth;

    if(len == brdth){
        cout << "It is a square ";
    }else{
        cout << "It is not a square ";
    }
}