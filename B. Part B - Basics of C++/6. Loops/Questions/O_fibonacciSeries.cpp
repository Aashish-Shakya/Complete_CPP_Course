#include <iostream>
using namespace std;

/*
Question -> Print first n terms of Fibonacci series with starting terms as 0,1

--> 0 1 1 2 3 5 8 13 21 34 ...


Have to revise again
*/

int main(){
    int n;
    cout <<"Enter number of terms" <<endl;
    cin >> n;
    int t1 = 0 ;
    int t2 = 1 ;
    
  
    int nextTerm ;
     for(int i =1; i<=n; i++){
        cout << t1 << endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
      
      
     }
}