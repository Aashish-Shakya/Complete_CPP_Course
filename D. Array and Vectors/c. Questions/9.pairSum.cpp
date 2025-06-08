#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*
Return pair in sorted array with target Sum

Brute Force approach
*/
vector<int> pariSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                // cout << nums[i] << " " << nums[j];
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
}
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

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pariSum(arr, target);
    // Prit Array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}


/*

#include <iostream>
#include <climits>
#include <vector>
using namespace std;

 
// Return pair in sorted array with target Sum
// Optimal Approach - using two pointer approach
 
vector<int> pariSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
}
int main()
{

    vector<int> arr = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = pariSum(arr, target);

    // Print Array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

*/
