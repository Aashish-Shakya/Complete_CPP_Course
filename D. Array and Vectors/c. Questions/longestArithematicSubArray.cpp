#include <iostream>
#include <climits>
using namespace std;

/*
Very COnfusing  
Came in Google kickstart
Longest Arithematic SubArray

An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal,
For example -
[9,10], [3,3,3], [9,7,5,3]
Are arithmetic arrays

while
[1,3,3,7], [2,1,2] and [1,2,4]
Are not arithmetic arrays


-> Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum lenght. Please help her to determine the lenght of the longest contiguous arithmetic subarray.


Sample Test Case
Array - {10, 7, 4, 6, 8, 10, 11}
           -3 -3  2  2  2   1

           {4, 6, 8, 10} - Diff is 2
           Lenght = 4



Intution and Approach
1. Previous Common Difference (pd)
1. Current Arithmetic Subarray lenght (curr)
3. Max arithemtic subarray lenght (ans)
*/

int main()
{
    // int n;
    // cout << "Enter size of array ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter element of  array ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int n =7;
    int arr[n] = {10, 7, 4, 6, 8, 10, 11};
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }

        ans = max(ans, curr);
        j++;
    }

    cout << ans << endl;
    return 0;
}