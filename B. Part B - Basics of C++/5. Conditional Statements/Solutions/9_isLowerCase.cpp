#include <iostream>
using namespace std;

// 9. Check if a character is lowercase or uppercase.

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase Letter" << endl;
    }
    else
    {
        cout << "Not an Alphabet" << endl;
    }

    return 0;
}
