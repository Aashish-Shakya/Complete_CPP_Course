
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
Home wprk

WAF to calculate sum & product of all number in an array

WAF to swap min and max number of an array

WAF to print all unique values in array - confusing

WAF to print intersection of 2 array

*/

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};
    int size = 4;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr1[i] << "," << arr2[j] << endl;
        }
    }

    return 0;
}