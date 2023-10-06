#include <iostream>
using namespace std;

 /* 
 Reference Variable -> Is an alternate name which we provide for an existiing variable such that any change made to either of those variabale is reflected on both of those varibales
 We decalarded them with & symbol  
 
 */

void modify(int a){
    a ++;
}

void modifyReference(int &a){
    a ++;
}

int main(){


// Case 1  --> a+1
// --> Here b will remains same and a,ref will bcms 12
    int a = 11;
    int b = a;
    // ref == refrenece variable
    int &ref = a; 

    a = a+1;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "ref:" << ref << endl;
    cout << "-------------" << endl;


// Case 2 --> b+1
// --> Here b will bcms 12 and a,ref will remains same
    a = 11;
    b = a;
    ref = a;  

    b = b+1;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "ref:" << ref << endl;
    cout << "-------------" << endl;

// Case 3 --> ref+1
// --> Here b will remains same and a,ref will bcms 12
    a = 11;
    b = a;
    ref = a;  

    ref = ref+1;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "ref:" << ref << endl;
    cout << "-------------" << endl;

    b = 10;
    cout << "Before modify fn call: b="<< b << endl;
    modify(b);
    cout << "After modify fn call: b="<< b << endl;
    cout << "-------------" << endl;
    // In below case &a is reference variable for b
    b = 10;
    cout << "Before modify fn call: b="<< b << endl;
    modifyReference(b);
    cout << "After modify fn call: b="<< b << endl;
    cout << "-------------" << endl;
}