#include <iostream>
using namespace std;

/*
Question -> Program to display mulitplication table upto 10
*/

int main(){
    int num;
    cout << "Please enter a +ve number" << endl;
    cin >> num;
 
//Using for Loop
    for(int i=1; i<=10; i++){
        cout << num << " * " << i << " = " << num*i <<endl;
    }
 
/*
//Using while loop
    int m = 1;
    while(m<=10){
        cout << num << " * " << m << " = " << num*m <<endl;
        m++;
    }
*/
/*
// Using Do While loop
    int d=1;
    do{
        cout << num << " * " << d << " = " << num*d <<endl;
        d++;
    }while(d<=10);
    */
}