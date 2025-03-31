#include <iostream>
using namespace std;

/*
6. Print the first multiple of 5 which is also a multiple of 7
*/

int main()
{
    int n = 100;

    for (int i = 6; i < n; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            cout << i << endl;
            break;
        }
    }
}