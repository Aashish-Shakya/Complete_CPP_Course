#include <iostream>
using namespace std;



/*
Question -> Check given number is prime or not

//Normal Method

    int i = 2;
    if(num>1){
       while(i<num){
         
            if(num%i == 0){
                cout << num << " is not a prime" << endl;
                break;
            } else {
                cout << num << " is Prime" << endl;
            }
             i++;
        }

    }
                // OR
                
//Efffiecent   Method

#include <iostream>
#include <cmath>
using namespace std;


 
//Normal Method

    int n;
    cin>>n;
    bool flag =0;

    // for(int i=2;i<n; i++) To shorten this loop range we can wrote below line with sqrt
    for(int i=2;i<=sqrt(n); i++) {
      //  If this block will execute flag gets one
        if(n%i==0){
            cout << "Non prime" << endl;
            flag =1;
            break;
        }
    }
    if(flag ==0){
        cout << " prime "<< endl;
    }

   */ 
/*
Question -> Check given number is prime or not

*/

/*
int main(){
    int num ;
    cout << "Enter number: " << endl;
    cin>> num;
    int i;
    for(int i=2;i<num;i++){
        if(num%i == 0){
            continue;
        } else{
             
            cout << num << " is prime" << endl;
            break;
        }
        
  }
            //OR

    for(i=2;i<num;i++){
        if(num%i == 0){
            cout <<"Not prime" << endl;
            break;
        }
    }
    if(i==num){
        cout << "Is Prime" << endl;
    }
    
}
 */ 
/*
Question -> Print all prime number between given range.

*/
int main(){
    int lowerLimit ;
    int upperLimit ;
    cout << "Enter Lower limit of range: " << endl;
     cin>> lowerLimit;
    cout << "Enter Upper limit of range: " << endl;
    cin>> upperLimit;

    
    for(int i = lowerLimit; i<=upperLimit; i++){
        int l;
        for(l=2; l<=i;l++){
            if(i%l==0){
            break;
           }
            
        }
        if(i==l){
        cout << i << endl;
    }
    }

    
}