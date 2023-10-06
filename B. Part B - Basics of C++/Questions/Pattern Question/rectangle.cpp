#include <iostream>
using namespace std;

/*
Question - Print the following pattern using loops and take input of Rows and Columns from user
        * * * *
        * * * *
        * * * *
        * * * *
        * * * *
Rows - 5
Columns - 4
*/

int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> columns;

    for (int l = 1; l <= rows; l++)
    {
        for (int i = 1; i <= columns; i++)
        {
            cout << " * ";
        }
        // cout << "\n";
        //OR
        cout << endl;
    }

    return 0;
}