#include <iostream>
using namespace std;

// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss
/*
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
*/

int main()
{
    int cp,sp;
    cout << "Enter a Cost Price" <<endl;
    cin>>cp;
    cout << "Enter a Selling Price" <<endl;
    cin>>sp;

    if(sp>cp){
        cout << "Profit = " << (sp-cp)<<endl;
    }else if(cp>sp) {
        cout << "Loss = " << (sp-cp)<<endl;
    }else{
        cout << "Nothing";
    }

  
 
}