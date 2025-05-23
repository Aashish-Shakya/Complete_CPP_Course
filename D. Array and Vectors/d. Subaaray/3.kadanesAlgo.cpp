#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
Kadane's Algorithm - Most Optimized sol for Max Subarray sum

+ve + +ve => +ve
-ve(s) + +ve => +ve
+ve + -ve(b) => -ve
In last case the o/p is -ve so whenever we add this in any other subarray it will always reduce the sum so onsted of adding a -ve number we will reset it to 0 and then add it so that sum will noe decrease
*/

int main()
{

    int n = 5;
    int arr[n] = {1, 2, -3, 4, 5};
    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int val : arr)
    {

        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "MAX SUBBRAY SUM " << maxSum;
    return 0;
}



// Time Complexity - O(n)