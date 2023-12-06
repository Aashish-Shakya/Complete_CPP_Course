#include <iostream>

using namespace std;
int main()
{
    int lowerLimit, upperLimit;
    cout << "Enter lowerLimit" << endl;
    cin >> lowerLimit;
    cout << "Enter upperLimit" << endl;
    cin >> upperLimit;

    int sum = 0;

   while(lowerLimit<upperLimit){

  
        while(lowerLimit>0){
            int lastdigit = lowerLimit% 10;
            cout << lowerLimit<< " = last digit ->" << lastdigit << endl;
            lowerLimit= lowerLimit/10;
        }
    lowerLimit = lowerLimit+1;
         }
        

    

    
}