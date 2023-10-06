#include <iostream>
using namespace std;

/*
Question - Find the type of triangle via sides measures.

Scalene - All sides a re unequal
a != b != c
Isosceles - Any two sides are equal
a=b or b=c or c=a
Equilateral - All three are qequal
a=b=c


*/

int main(){

    int a,b,c;
    cin>>a>>b>>c;

     if(a==b || b==c || c==a ){
        if(a==b==c){
            cout << " Equilateral " << endl;
        }
        cout << " Isosceles " << endl;
     

     } else{
    cout << " Scalene " << endl;
     }

}