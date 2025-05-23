#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
Maximun Subarray Sum
*/

int main()
{

    int n = 5;
    int arr[n] = {1, 2, -3, 4, 5};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currentSum = 0;
        for (int end = st; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "MAX SUBBRAY SUM " << maxSum;
    return 0;
}



// Time COmplexity - O(n^2)