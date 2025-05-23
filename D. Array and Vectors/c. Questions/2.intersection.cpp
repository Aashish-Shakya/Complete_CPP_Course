#include <iostream>
using namespace std;

/*
 

WAF to print intersection of 2 array

*/

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 2, 1, 1};
    int size = 4;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j];
            }
        }

        
    }

    return 0;
}