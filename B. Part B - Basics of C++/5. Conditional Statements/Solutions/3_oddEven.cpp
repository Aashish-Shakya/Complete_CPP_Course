#include<iostream>
using namespace std;

//Question 3 - Program to check is a number is even or odd using if/else 

int main(){

    int num;
    cout << "Enter the number " << endl;
    cin >> num;

    if( num%2 == 0){
        cout << "Number is Even" << endl;
    }else{
         cout << "Number is Odd" << endl;
    }

//Using ternanry operator
    (num%2==0)?cout<<"Even":cout<<"Odd";

    return 0;

}