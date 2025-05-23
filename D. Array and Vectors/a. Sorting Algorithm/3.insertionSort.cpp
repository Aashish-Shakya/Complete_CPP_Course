#include <iostream>
#include <climits>
using namespace std;

// Insertion sort - Need to understand

//  Insert an element from unsorted array to its correct position in sorted array

// Just like sorting a decl of card

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

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}


//  Top 3 fastest horses in video 8.3.3


/*
Complexity Analysis

Worst Case Time Complexity - O(n*2) - Occurs when array is reverse sorted
Avg Case Time Complexity - O(n*2)


Best Case Time Complexity - O(n) - when array is alredy sorted ->
  

Space Complexity - O(1)
*/

