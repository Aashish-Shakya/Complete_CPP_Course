#include <iostream>
using namespace std;

/*
-> Write a Program to add only +ve number
*/

int main()
{

    int num;
    int sum = 0;

    cout << "Enter a  number" << endl;
    cin >> num;
    /*
    // WHat i did
        while (num >= 0)
        {
            cin >> num;
            if (num >= 0)
            {

                sum += num;
            }
        }
    */
    while (num >= 0)
    {
        sum += num;
        cout << "Enter a +ve number" << endl;
        cin >> num;
    }
    cout << "Sum is " <<sum;

    return 0;
}