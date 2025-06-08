#include <iostream>
#include <climits>
using namespace std;

/*
Sum of all SubArrays
Given an array a[] of size n, Output sum of each subarray of the given array

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

    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
         
    }
    
    return 0;
}