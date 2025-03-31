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

// 2nd Method

/*

#include <iostream>
using namespace std;

// Program to Maximun   among three numbers using if/else
int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {

        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

    return 0;
}
*/



//Third method
/*
#include <iostream>
using namespace std;

 
Question -> Write a program to count all the digits of a number
/

int main()
{
    int a = 10, b = 10, c = 2;

    if (a > b && a > c)
    {
        cout << "A is maximum " << endl;
        if (b > c)
        {
            cout << "C is minimum " << endl;
        }
        else
        {
            cout << "B is minimum " << endl;
        }
    }
    else if (b > a && b > c)
    {
        cout << "B is maximum " << endl;
        if (a > c)
        {
            cout << "C is minimum " << endl;
        }
        else
        {
            cout << "A is minimum " << endl;
        }
    }
    else if (c > a && c > b)
    {
        cout << "C is maximum " << endl;
        if (b > a)
        {
            cout << "A is minimum " << endl;
        }
        else
        {
            cout << "B is minimum " << endl;
        }
    }
    else
    {
        cout << "Invalid input " << endl;
    }

*/