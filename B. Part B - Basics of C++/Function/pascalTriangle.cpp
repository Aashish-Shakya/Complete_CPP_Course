#include <iostream>
using namespace std;

/*
0! - 1
Question -   Pascal'S TRIANGLE PATTERN

      |  1
    i |  1 1
      |  1 2 1   
      |  1 3 3 1 
      |  1 4 6 4 1 
      _________________
       j -->
Lets i be n and j be r then its element are like this
Each term  Ti.j = iCj

0C0 
1C0 1C1
2c0 2c1 2c2 
2c0 3c1 3c2 3c3 
......

n = 5
*/
 //Dekh kai kiya logic wala part
int factorial(int n)
{
    int fact = 1;
    
    for (int i = n; i >= 1; i--)
    {

        
        fact *= i;
    }
    
    return fact;
}

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n ;
   
     for(int i =0 ;   i<n ;i++){
        for(int j=0 ; j<=i;j++){
            cout << factorial(i)/ (factorial(j)* factorial(i-j)) << " ";
        } cout << endl;
     }
     
      

    



    return 0;
}