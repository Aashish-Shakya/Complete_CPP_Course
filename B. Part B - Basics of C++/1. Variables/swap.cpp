#include <iostream>
using namespace std;

/*
Question -> Write a program to swap two numbers  


*/
int main()
{

    int x, y, z; // 1 , 2, z
    cout << "Enter a x and y" << endl;
    cin >> x >> y;
    cout << x << y << endl;
    z = x;
    x = y;
    y = z;
  

    cout << x << y << endl;
}
