#include <iostream>
using namespace std;

/*
Question -   HALF NUMBERS PYRAMID INVERTED PATTERN    
            1 1 1 1 1
            2 2 2 2
            3 3 3
            4 4 
            5  
            
n = 5
*/


int main()
{
    int n, m;
    cout << "Enter the number " << endl;
    cin >> n  ;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            
            cout<< i ;
        }
        
        // cout << "\n";
        //OR
        cout << endl;
    }

    return 0;
}