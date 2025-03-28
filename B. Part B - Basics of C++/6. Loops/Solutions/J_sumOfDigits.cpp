#include <iostream>
using namespace std;

/*
Question -> Write a program to ind the sum of all the digits of a number

*/

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
int lastdigit = 0;
int sum =0;
 
    while(num>0){
        lastdigit = num%10;
        sum = sum + lastdigit;
        num = num/10;
        
        
    
    }
        
        
 
    cout << sum;
}