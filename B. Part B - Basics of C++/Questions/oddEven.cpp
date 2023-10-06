#include <iostream>
using namespace std;

/*
Question -> Check the number given by user is Even or Odd.

*/

int main(){
    int num;
    cout << "Enter number"<< endl;    
    cin>>num;

/*
//Odd and Even
    if(num%2 == 0){
           cout << num << " is even "<< endl;     
    }else{
     cout << num << " is Odd"<< endl;  
    }

*/
// Odd number till n

    for(int i=1;i<=num;i++){
        if(i%2==0){
            continue;
        }else{
            cout << i << endl;
        }
    }

}