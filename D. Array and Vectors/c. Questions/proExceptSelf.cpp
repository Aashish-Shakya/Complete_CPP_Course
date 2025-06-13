#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.



Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.


Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
*/

//  My code - I think Brute Force -- O(n^2)
int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> answer(n);

    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                prod = prod * nums[j];
            }
        }
        answer.push_back(prod);
        // answer[i] = prod;
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}


/*

//  One more approach with division but it is mentioned not to use it in qusn

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> answer(n);
    int totalProd = 1;

    for (int i = 0; i < n; i++)
    {
        totalProd *= nums[i];
    }
    

    for (int i = 0; i < n; i++)
    {
         
        answer[i] = totalProd / nums[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}

*/



/*

//  2nd approach with O(n) Time and SPace complexity

int main()
{

    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> answer(n,1);
    vector<int> suffix(n,1);
    vector<int> prefix(n,1);
    int totalProd = 1;

    // prefix[0] = 1;
    // suffix[n - 1] = 1;

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1]; // It is the product of previous numbers * previous number
    }

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1]; // It is the product of next numbers * next number
    }

    for (int i = 0; i < n; i++)
    {
        answer[i] = prefix[i]*suffix[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }


    // Actual TC is O(3n) which equal to O(n)
    return 0;
}

*/





/*


// Most Optimal approach approach with O(n) Time and SPace complexity i O(1)

int main()
{

    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> answer(n, 1);

    // prefix => answer
    for (int i = 1; i < n; i++)
    {
        answer[i] = answer[i - 1] * nums[i - 1]; 
    }

    int suffix = 1;
// suffix
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1]; 
        answer[i] *= suffix;
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }

    // Actual TC is O(3n) which equal to O(n)
    return 0;
}

*/