#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// /Question - Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// https://leetcode.com/problems/single-number/description/]

// Use approach to cancell duplicate one then only unique remains
//  This question is based on Bitwise XOR
/*
0 XOR 0 -> 0
1 XOR 1 -> 0
0 XOR 1 -> 1
1 XOR 0 -> 1

THAR IMPLIES N XOR N = 0
 N XOR 0 = N
*/
int main()
{

    int arr[5] = {1, 2, 3, 2, 1};

    int result = 0;
    // For each loop
    for (int i : arr)
    {
        result ^= i;
    }

    cout << "Unique one is " << result;
    return 0;
}