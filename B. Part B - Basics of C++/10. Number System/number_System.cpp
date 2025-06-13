#include <iostream>
using namespace std;

// Did not understand have to check again
 
 // Binary to Decimal
 /*
int main(){
    int n ;
    cin >> n;

    int ans = 0;
    int power =1;

    while(n>0){
        int lastdigit = n%10;
        ans += lastdigit * power;
        power *= 2;
        n/=10;

    }
    cout << ans << endl ;
    return 0;
}

*/
 // Decimal to Binary
int main(){
    int n ;
    cin >> n;

    int ans = 0;
    int power = 1;

    while(n>0){
        int parityDigit  = n%2;
        ans += parityDigit * power;
        power *= 10;
        n/=2;

    }
    cout << ans << endl ;
    return 0;
}