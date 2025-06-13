#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*
Reverse Of an Array
This logic is based on Two pointer concept  --> going to  track two points and then perfrom operation
*/

int main()
{
    // int n;
    // cout << "Enter size of array ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter element of  array ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int digits[] = {1, 3, 9, 4, 5};
    int n = 5;
    int end = n - 1;
    int st = 0;
    while (st < end)
    {
        swap(digits[st], digits[end]);
        st++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << digits[i];
    }

    return 0;
}