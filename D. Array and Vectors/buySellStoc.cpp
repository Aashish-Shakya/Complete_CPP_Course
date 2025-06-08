#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
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
    int n = 6;
    vector<int> ns = {6, 5, 3};
    int arr[n] = {7, 1, 5, 3, 6, 4};
    int buyIndex = 0;
    int buy = INT_MAX;
    int sell = 0;

    for (int i = 0; i < n; i++)
    {

        if (buy > arr[i])
        {
            buy = arr[i];
            buyIndex = i; // 0
            // sellIndex = i + 1;
        }
        // if (i > buyIndex && sell < arr[i])
        if (i > buyIndex)
        {
            sell = max(sell, arr[i]);
        }
    }
    if (sell == 0)
    {
        buy = 0;
    }

    cout << "Buy = " << buy << endl;
    cout << "Sell = " << sell << endl;

    cout << "Profit = " << sell - buy;
    
 
    return 0;
}


/*
actualy code
 int n = 6;

    int arr[n] = {7,1,5,3,6,4};

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : arr)
    {
        if (price < minPrice)
        {
            minPrice = price; // update buy price
            maxProfit = max(maxProfit, price - minPrice); // update max profit
        }
        
       
    }
    cout << maxProfit;
    return maxProfit;
}
*/