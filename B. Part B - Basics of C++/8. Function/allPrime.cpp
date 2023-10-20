#include <iostream>
#include <math.h>
using namespace std;

//Not able to buiid corret logic

 bool isPrime( int num){
    // for(int i=2; i< (num);i++){
        //Or To shorten loop we use sqrt
    for(int i=2; i< (num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
 }
int main()
{
    int n1,n2 ;
    cout << "Enter a numbers" << endl;
    cin >> n1 >> n2;
    
    for(int i=n1; i<=n2; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
     
}