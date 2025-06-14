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
