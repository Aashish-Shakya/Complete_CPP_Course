#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Bubble sort
//  repeatedlt sorts adjacent elements by swapping them if place in the wrong order

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

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << " Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
2nd Method
After taking array input
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
*/

/*
Complexity Analysis

Worst Case Time Complexity - O(n*n) - Occurs when array is reverse sorted
Avg Case Time Complexity - O(n*n)


Best Case Time Complexity - O(n) - when array is alredy sorted ->
 for this we need add check contraints before and after loop to check if swapping happen then continue else break loop

Space Complexity - O(1)




*/