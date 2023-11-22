#include <iostream>
using namespace std;

/*
Question - Print the right angle Triangle/Half Pyramid pattern using loops and take input from user
 *  
 * *        
 * * *        
 * * * * 

n = 4

*/
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
     

    for (int i = 1; i <= n; i++)
    {
        
        for(int j = 1; j <= i; j++){
            cout << " * ";
        }

        cout << "\n";
    }

    return 0;
}