#include <iostream>
using namespace std;

/*Check if a person is eligible to vote.*/

int main()
{
    int age = 0;
    cin >> age;

    if (age >= 18)
    {
        cout << " Eligible to Vote " << endl;
    }
    else
    {
        cout << " Not an Adult " << endl;
    }

    return 0;
}
