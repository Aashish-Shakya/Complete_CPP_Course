#include <iostream>
using namespace std;

/*
Question -> Write a program to count all the digits of a number

*/

int main()
{
    int num,rem,n;
    cout << "Enter number" << endl;
    cin >> num;
int count = 0;
int sum =0;
 
    while(num>0){
        count = num%10;
        sum = sum + count;
        num = num/10;
        
        
    
    }
        
        
 
    cout << sum;
}