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

    vector<int> arr = {1, 2, 9};

    int lastDigit = arr.back();

    if (lastDigit < 9)
    {
        arr.pop_back();
        lastDigit += 1;
        arr.push_back(lastDigit);
    }else{
        arr.pop_back();
        lastDigit += 1;
        

        arr.push_back(1);
        arr.push_back(0);
    }
    for (int digit : arr)
    {
        cout << digit;
    }

    return 0;
}

/*


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + 1 != 10) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
            if (i == 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;        
    }
};

*/