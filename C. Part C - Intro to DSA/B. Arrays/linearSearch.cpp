#include <iostream>
using namespace std;

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