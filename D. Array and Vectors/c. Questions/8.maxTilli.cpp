#include <iostream>
#include <climits>
using namespace std;

/*
Max till i
Given an array a[] of size n, For every i from o to n-1 output max(a[0], a[1], . . . , a[i])

Example -   {1, 0, 5, 4, 6, 8}

Max till i = 1  1  5  5  6  8
- It will be constant or keeps on increasing = Non decreasing
*/

int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter element of  array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        maxNum = max(maxNum, arr[i]);

        cout << maxNum << " ";
 
    }
    
    return 0;
}