#include <iostream>
#include <climits>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.



Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1


Constraints:

n == height.length
2 <= n <= 10^5
0 <= height[i] <= 10^4
*/


//  My code -- This one is Brute force - O(n^2) - Acc to time contraints this code will give TLE [Time Limit Exception]
int main()
{

    vector<int> heights = {1,8,6,2,5,4,8,3,7};

    int n = heights.size();
    // cout << n <<endl;
    int maxWater = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int w = j - i;
            int ht = min(heights[j], heights[i]);
            int currWater = ht * w;

            maxWater = max(maxWater,currWater);
        }
    }
   
    cout << maxWater;

    return 0;
}


// Optimized code

/*
//  Optimized -- This one is using two pointer - O(n)
int main()
{

    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int n = heights.size();
    int maxWater = 0;
    int lp = 0;
    int rp = n - 1;
    int count = 0;
    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(heights[rp], heights[lp]);
        int currWater = ht * w;
        maxWater = max(maxWater, currWater);

        if (heights[lp] < heights[rp])
        {
            lp++;
        }
        else
        {
            rp--;
        }
        count++;
    }

    cout << maxWater;

    return 0;
}

*/