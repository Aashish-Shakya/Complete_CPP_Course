#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
Majority Element
Best Approach - Moore's Voting Algorithm - O(n)

Run a loop and check the occurence of the element starting from 0 index and whenever it found same ele then increase freq else on different elenet decrease freq
The freq will never be less than 0 for majority element
Thats how we found it


Says -
do Freq++ --> Smae ele
Do freq-- --> Diff ele

*/

// My code
int majorityElement(vector<int> nums)
{
    // vector<int> ans;
    int n = nums.size();

    int ans = 0;
    int freq = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {3, 3, 3, 3, 3, 1, 2};

    int ans = majorityElement(arr);
    cout << ans;

    return 0;
}
