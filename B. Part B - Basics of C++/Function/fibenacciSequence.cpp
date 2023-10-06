#include <iostream>
#include <math.h>
using namespace std;

// Fibonacci -> 0,1,1,2,3,5,8

//Next term is sum of previous two terms

// Not able to create logic by own
void fib( int n){
     int t1 = 0;
    int t2= 1;
    
    int nextTerm;

    for(int i =1; i<=n; i++){
        cout << t1 << endl;
        nextTerm = t1 +t2;
        t1 = t2;
        t2 = nextTerm;

       
    }
     return;
}

 int main(){
    int n ;
 cout << "Enter number"  << endl;
 cin >> n;
   fib(n);
   return 0;
 }