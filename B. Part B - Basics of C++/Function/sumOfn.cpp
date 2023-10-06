#include <iostream>
using namespace std;

/*
0! - 1
Question -   Sum of first n natural numbers
  
*/
 
int sum(int n)
{
    int add =0 ;
     
   for(int i =1 ; i<=n ; i++){
        add = add+i;
   }
   
   return add;
    
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n ;

     
   

   cout <<sum(n);
// We can do this by a formula
// S = n(n+1)/2
    cout << (n*(n+1) )/2 << endl;
    return 0;
}



