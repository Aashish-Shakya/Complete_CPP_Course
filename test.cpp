
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> myVector = {1, 2, 3};

    for (int val : myVector)
    {
        cout << val << " ";
    }
    return 0;
}
