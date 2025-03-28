#include <iostream>
using namespace std;

// Program to Maximun and Minimum among three numbers using if/else


//Try to find out any short method for this.

int main()
{

    int num1, num2, num3, max, min;
    cout << "Enter three numbers " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            max = num1;

            if(num2>num3){
                min = num3;
            }else{
                min = num2;
            }
        }
        else
        {
            max = num3;
            if(num1>num2){
                min = num2;
            }else{
                min = num1;
            }
        }
    }
    else  
    {
        if (num2 > num3)
        {
            max = num2;
           if(num1>num3){
                min = num3;
            }else{
                min = num1;
            }
        }
        else
        {
             
            max = num3;
            if(num1>num2){
                min = num2;
            }else{
                min = num1;
            }
        }
         
    }
     

    cout << "Maximun " << max << endl;
    cout << "Minimun " << min << endl;

  
    return 0;
}