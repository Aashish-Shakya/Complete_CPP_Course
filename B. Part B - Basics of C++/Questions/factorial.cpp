#include <iostream>
using namespace std;

/*
Question -> Write a program find the factorial of 32 numbers givn as input.

*/

int main(){
    int n1,n2;
    cout << "Enter numbers" <<endl;
    cin >> n1>>n2;
    int fact1 =1;
    int fact2 =1;
    for(int i=1 ; i<=n1 ; i++){
        fact1 = fact1*i;
    }
    for(int i=1 ; i<=n1 ; i++){
        fact2 = fact2*i;
    }
    cout <<"Facotrial of "<< n1 << " is " <<  fact1 << endl;
    cout <<"Facotrial of "<< n2 << " is " <<  fact1 << endl;
}

// Here we can see that we are writing same code for two time oe for n1 and other for n2 so to reduce this dulicay or repetition we can functions.