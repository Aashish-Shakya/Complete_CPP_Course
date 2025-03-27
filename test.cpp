#include <iostream>
#include <cmath>
using namespace std;

/*

Q12 - Armastrong


*/
int main()
{
    int n = 1634;
    float sum = 0;    
    float original = n;
 

    while (n > 0)
    {
        int lastdigit = n % 10;   
        sum += pow(lastdigit, 3);          
        n = n / 10;  
    }
 

    if( sum == original){

        cout << sum << " is a sumtrong";
    }else{
        cout << sum << " is  not ";
    }
 
    return 0;
}
