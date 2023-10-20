#include <iostream>
using namespace std;


// Question 2. -> Take input from user till user gave any negative input.


int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    while(num>=0)
    {
      cout << num << endl;
      cin >> num;
    }
}
 //Using DO While Loop

/*
 


int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    do{
        cout << num << endl;
        cin >> num;
    }while(num>0);
*/
 
 