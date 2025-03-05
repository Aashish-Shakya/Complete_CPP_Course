#include <iostream>
using namespace std;

 
int main()
{
    /*

    Type Casting - Convert data from on to another data type
    1. Implicit  -   Conversion - Compiler will do it automatically
    Big Data type --> Small - No data loss


    2. Explicit   -    Casting -> Force compiler to do it
    Small --> Big data type -->  Maybe data loss


    */

    // Conversion
    char a = 'A';
    int b = a;

    cout << b << endl;


     // Casting
     float a1 = 100.99;
     int b1 = (int)a1;
 
     cout << b1 << endl;
    return 0;
}