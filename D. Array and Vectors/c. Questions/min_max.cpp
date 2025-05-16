#include <iostream>
#include <climits>
using namespace std;

/*
array - maximim minimum and tgeir indexes
*/

int main()
{
    int arr[] = {10, 13, 3, -46, 56,
    };
    int size = 5;
    int index;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            index = i;
        }
        if (largest < arr[i])
        {
            largest = arr[i];
            index = i;
        }

        // OR
        //smallest =  min(arr[i], smallest);
        // largest = max(arr[i], largest);
    }
    cout << "  Smallest Number index " << index << endl;
}