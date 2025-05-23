#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*Not completed no codes yet

# Merge Sort
Divide and Conquer Technique
It divide the input array into two halves and then merges the two sorted halves

Step 1 - it it is only one element in list it is already sorted, return

Step 2 - Divide the list recursively into two halves untill it can no more be divided

Step 3 - merge the smaller lists into new list in sorted order



For larger data it is fast but for smaller data it is slower


*/

int main()
{

    int size;
    cout << "Enter size of array ";
    cin >> size;
    int arr[size];
    cout << "Enter element of  array ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Unsorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // int size = sizeof(arr) / sizeof(arr[0]);

    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << " Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


/*
Complexity Analysis

Worst Case Time Complexity - O(n*n) - Occurs when array is reverse sorted

Avg Case Time Complexity - O(n*n)


Best Case Time Complexity - O(nlogn) - when array is alredy sorted ->
 

Space Complexity - O(n)

*/
