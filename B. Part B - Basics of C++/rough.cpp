#include <iostream>
using namespace std;

int main()
{
    int a,b,c ;
    cout << "Enter 1st number " ;
    cin >> a  ;
    cout << "Enter 2nd number " ;
    cin >> b  ;
    // a = 3 , b = 4
    c = a;
    a = b;
    b = c;

    cout << " a is " << a << " b is "<<  b   ;

    return 0;
}