#include <iostream>
#include <math.h>
using namespace std;

/*
0! - 1
Question -   Check pythagorian triplet
Give - x , y , z;

Logic -->
Ass Hypo.. is longest side so we find out the maxium of all three and store it in a varialble then compare it square with other two number square value after addition
*/

bool triplet(int x, int y, int z)

// My Code
/*
{
    int max , mid, min;
    if (x > y)
    {
        if (x > z)
        {
            max = x;
        }
        else
        {
            max = y;
        }
    }
    else
    {
        max = z;
    }

    if( max == x){
        mid = y;
        min = z;
    }else if(max == y){
        mid = z;
        min = x;
    }else{
        mid = x;
        min = y;
    }

    if( pow(max,2) ==  pow(min,2) + pow(mid,2)){
        return true;
    }else{
        return false;
    }


}
*/

// Provided Code
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = z;
        c = x;
    }
    else
    {
        b = x;
        c = y;
    }

    if( a*a == b*b + c*c)
        return true;
    else
        return false;
}
int main()
{
    int x, y, z;
    cout << "Enter x,y,z" << endl;
    cin >> x >> y >> z;

    if (triplet(x, y, z))
    {
        cout << "Pythagorian triplet" << endl;
    }
    else
    {
        cout << "not" << endl;
    }

    return 0;
}
