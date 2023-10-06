#include <iostream>
using namespace std;

/*
Question -> find out the maxium among munbers.
*/

int main( )
{

// Maxiumun of two
    int num1,num2;
    cout <<"Enter two numbers" << endl;
    cin >> num1 >> num2;

    if(num1 > num2 ){
        cout << num1 << " Is greater" << endl;
    } else{
        cout << num2 << " is greater" << endl;
    }


// Maxiumun of Three
    int a,b,c;
    // cout <<" Enter number 1 "<< endl;
    // cin >>a;
    // cout <<" Enter number 2 "<< endl;
    // cin >>b;
    // cout <<" Enter number 3 "<< endl;
    // cin >> c;
    cout << "Enter three numbers " << endl;
    cin >> a >> b >> c  ;

    if(a>b){
        if(a>c){
            cout << a <<" is maxium" << endl;
        } else {
            cout << c <<" is maxium" << endl;
        }
    } else{
        if(b>c){
            cout << b <<" is maxium" << endl;
        } else {
            cout << c <<" is maxium" << endl;
        }
    } 

   
    return 0;
}
