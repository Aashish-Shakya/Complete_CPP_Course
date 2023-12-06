#include <iostream>
using namespace std;

/*
Question -   Pascal'S TRIANGLE PATTERN
            1
           1 1
          1 2 1   
         1 3 3 1 
        1 4 6 4 1 

n = 5
*/
// Logic ni bna paya mai iska 
// Have ti see it on utube
int main()
{
    int n, count;
    cout << "Enter number" << endl;
    cin >> n;
 int coef =1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            if((k==0) || i == 0){
                coef =1;
            }else{
                coef = coef * (i-k+1)/k;
            }
            cout << coef << "  ";
        }
        cout << endl;
    }
    return 0;
}