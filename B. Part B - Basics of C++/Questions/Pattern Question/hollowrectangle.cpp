#include <iostream>
using namespace std;

/*
Question - Print the Hollow Rectangle pattern using loops and take input of Rows and Columns from user
        * * * *
        *     *
        *     *
        *     *
        * * * *
Rows - 5
Columns - 4
*/

int main()
{
    int rows, columns;
    cout << "Enter the number of rows and columns" << endl;
    cin >> rows >> columns;

    // My code
    // for (int l = 1; l <= rows; l++)
    // {
    //     for (int i = 1; i <= columns; i++)
    //     {
    //         if (l == 1 || l == rows)
    //         {
    //             cout << " * ";
    //         }
    //         else
    //         {
    //             if (i == 1 || i == columns)
    //             {
    //                 cout << " * ";
    //             }
    //             else
    //             {

    //                 cout << "   ";
    //             }
    //         }
    //     }

        // Provided solution
        for (int l = 1; l <= rows; l++)
        {
            for (int i = 1; i <= columns; i++)
            {
                if (l == 1 || l == rows || i == 1 || i == columns)
                {
                    cout << " * ";
                }
                else
                {

                    cout << "   ";
                }
            }
            // cout << "\n";
            // OR
            cout << endl;
        }

        return 0;
    }