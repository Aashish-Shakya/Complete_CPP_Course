#include <iostream>
using namespace std;
/*
 
WAF to print all unique values in array  
*/


void printUnique(int arr[], int size) {
    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if this element appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // Check if this element appears later
        for (int k = i + 1; k < size; k++) {
            if (arr[i] == arr[k]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, size);

    return 0;
}


// My code 
/*
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

 
 WAF to print all unique values in array
 

int main()
{
   

    int arr[] = {1, 5, 3, 4, 1};
    int n = 5;
    int end = n - 1;
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (arr[i] == arr[j])
            {
                break;
            }

            if (j == (n - 1))
            {
                cout << arr[i] << " ";
            }
        }
    }

   
    return 0;
}
*/