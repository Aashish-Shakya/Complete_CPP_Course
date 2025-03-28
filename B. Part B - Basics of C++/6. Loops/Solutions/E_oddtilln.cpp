#include <iostream>
using namespace std;

/*
Question -> Write a program to print all Odd number till n

*/

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }
}