#include <iostream>
using namespace std;

/*
Question -   BUTTERFLY PATTERN
            *             *
            * *         * *
            * * *     * * *
            * * * * * * * *
            * * * * * * * *
            * * *     * * *
            * *         * *
            *             *
n = 4

 
Provided solution
In this case we can create upper part and repicate it for below

8 rows
8 columns
that implies --> 2*n rows and columns

Upper Part
    Rows : 1 to n
    Stars (*) : Row No. in starting and ending are same
    Spaces: 2*n-2* Row No.  ==  2*4-2*1 = 6

Lower Part
    Rows : n to 1
    Stars (*) : Row No. -->in starting and ending
    Spaces: 2*n-2* Row No.  ==  2*4-2*1 = 6



*/

int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
//Upper Part
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {

            cout << "* ";
        }
        cout << endl;
    }

//Lower part

    for(int i = n; i>=1; i--){
        for(int j =1 ; j<=i; j++){
            cout << "* ";
        }
        int space = 2*n -2*i;
        for(int k =1; k<=space; k++){
            cout << "  ";
        }
        for(int l =1 ; l<=i; l++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}