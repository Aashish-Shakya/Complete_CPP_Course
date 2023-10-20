#include <iostream>
using namespace std;
 
int main()
{

    int n,sum;
    cout<<"Enter a number " << endl;
    cin >> n;

    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout << "Sum is "<< sum;

    return sum;
}
