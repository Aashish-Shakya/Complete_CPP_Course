#include <iostream>
using namespace std;

/*
AIM - Find an elemnt(X) in the array and return its position

A simple approach is to do a linear search i.e

- Start from leftmost element of arr[] and one ny one compare X with each element of arr[]
- if X matches with an element, return the index
- If X doesn't match with any of the element retun -1
*/
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "Enter size of array";
    cin >> n;
    int arr[n];
    cout << "Enter element of array array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter search ";
    cin >> target;

    cout << linearSearch(arr, n, target);

    return 0;
}


/*
Complexity Analysis

Worst Case Time Complexity - O(n) - element at last index


Avg Case Time Complexity - O(nhi btayi)


Best Case Time Complexity - O(1) -  when element is at 1st postion


Space Complexity - O(1)


*/