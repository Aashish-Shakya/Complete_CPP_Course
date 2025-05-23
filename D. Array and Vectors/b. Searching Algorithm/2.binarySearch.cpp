#include <iostream>
using namespace std;

/*
// For binary search the elemnts should be in asscending order
Sorted array -> continusoly divides into 2

- Compare x with the middle element
- If x matches with the middle element, we retunr the mid index

Else if X is greater then the mod elemenet then x can only lie in the right half subarray after the mid eleement, SO we recur for the right half

Else x is smaller recur for lefft half
*/


int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {

            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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

    cout << binarySearch(arr, n, target) << endl;

    return 0;
}

/*
Time Complexity of Binary Search

 After first Iteration, length of array  --> n
 After 2nd Iteration, length of array  --> n/2
 After 3rd Iteration, length of array  --> (n/2)/2 => n/2^2
 After k Iteration, length of array  --> n/2^k



 Let the lenght of arrya become 1 after K iternation

 n/2^k = 1
 n = 2^k
 log(n) = log(2^k)
 log(n) = Klog2
 k = logn


 Tie compleixt  = O(logn base 2)
*/