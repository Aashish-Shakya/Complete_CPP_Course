#include <iostream>
#include <math.h>
using namespace std;

/*
1. Hollow Diamond
2.  Hollow Diamond in Reactangle
3. Hollow Butterfly
4. Pascal's Triangle
5. Zig Zag Pattern
6. Cross Pattern
7. Alphabet Diamond Pattern
8.  + pattern
9. Triangle of prime
10. can be expressed as sum of two primes?
 


    *   *
     * *
      *
     * *
    *   *

*/
int main()
{
 
    int lowerLimit, upperLimit;
    cout << "Enter lowerLimit" << endl;
    cin >> lowerLimit;
    cout << "Enter upperLimit" << endl;
    cin >> upperLimit;

     
     
    for(int i =lowerLimit; i<upperLimit; i++){
       int sum = 0;
        int t = i;
     while (t > 0)
      {
      
        int lastDigit = t % 10;
        sum += lastDigit * lastDigit * lastDigit;
        t = t/10;
      }
    if (sum == i)
    {
        cout << i << " Armstrong Number" << endl;

    } 

    }
 
    return 0;
}
