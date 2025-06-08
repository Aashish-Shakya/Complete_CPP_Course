#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
using namespace std;

/*
Given an array of size n, return the majority element
WHich is the element that appears more than floor(n/2) times
You may assume that it always rxists in the array.


Note - There can only be one MJ exist bcz it is more than half of array
Brute Force approach

*/


int majorityElement(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();

    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {

                freq++;
            }
        }

        if (freq > (n / 2))
        {
            return val;
        }
    }
}
int main()
{

    vector<int> arr = {1, 2, 2, 1, 2};

    int ans = majorityElement(arr);
    cout << ans;

    return 0;
}





/*
 // My code
Brute Force approach  - O(n^2)




int majorityElement(vector<int> nums)
{
    vector<int> ans;
    int n = nums.size();
    int mj = floor(n / 2);
    int search;
    for (int i = 0; i < n; i++)
    {
        int counter = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j && nums[i] == nums[j])
            {
                search = nums[i];
                counter++;
            }
        }

        if (counter > mj)
        {
            return search;
        }
    }
}
int main()
{

    vector<int> arr = {1, 2, 1, 1, 2};


    int ans = majorityElement(arr);
    cout << ans;
    // Print Array
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    return 0;
}

*/



/*

#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

 
// Majority Element
// Optimize Approach - Using sorting  - O(logn)
// Step 1 - We need a sorted arrya - we will add this code later
//  Step2 - we are coding it below

 

// My code
int majorityElement(vector<int> nums)
{
    // vector<int> ans;
    int n = nums.size();

    // Learn this later
    sort(nums.begin(), nums.end());

    int ans = nums[0];

    int freq = 1;
    for (int i = 0; i < n; i++)
    {

        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {2,2,1,1,1,2,2};

    int ans = majorityElement(arr);
    cout << ans;

    return 0;
}


*/



/*

#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

 
Majority Element
Best Approach - Moore's Voting Algorithm - O(n)

Run a loop and check the occurence of the element starting from 0 index and whenever it found same ele then increase freq else on different elenet decrease freq
The freq will never be less than 0 for majority element
Thats how we found it


Says -
do Freq++ --> Smae ele
Do freq-- --> Diff ele
 

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




One more variation when we don't have any MJE in array then we return -1 for that
After More's ALgo we need to run one more loop to count the freq of the result of Algo and if its > n/2 then print which never happen else ans will be -1
*/