#include <iostream>
using namespace std;

/*
Question -   FLOYD'S TRIANGLE PATTERN
            1
            2  3
            4  5  6
            7  8  9 10
            11 12 13 14 15

n = 5
*/
// Logic ni bna paya tha mai count wala
int main()
{
    int n, count;
    cout << "Enter number" << endl;
    cin >> n;
    count = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}