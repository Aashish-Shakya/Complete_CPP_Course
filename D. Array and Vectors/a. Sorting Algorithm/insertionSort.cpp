#include <iostream>
#include <climits>
using namespace std;

// Insertion sort - Need to understand

//  Insert an elemnt from unsorted array to its correct position in sorted array

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