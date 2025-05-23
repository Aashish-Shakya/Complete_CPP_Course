
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
Question - WAF to calculate sum & product of all number in an array
*/

int sumProd(int arr[], int size)
{
    int sum = 0, prod = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    cout << " Sum of array : " << sum << endl;
    cout << " Product of array : " << prod << endl;
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = 4;

    sumProd(arr, size);
    return 0;
}