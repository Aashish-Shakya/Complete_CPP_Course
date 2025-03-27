#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    a = 21, b = 12;

// *** int y = 1,2,3;
// so finally the value of y is 3 the last one
// Types of Operators

/*
1. ARITHMETIC OPERATORS
*/

/*
// Examples ->

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;


// During Modulo operation, the sign of the left operand will be the sign of the output/remainder
    cout << a%b << endl;
    cout << (-a%b) << endl;
    cout << (a%-b) << endl;
    cout << (-a%-b) << endl;
*/

/*
2. LOGICAL OPERATORS - allows us to do logical operarions

*/

/*
// a= 21, b= 12
//  1 = True , 0 = False
// Example -->

    cout << ( a<b ) << endl;
    cout << ( a>b ) << endl;
    cout << ( a<=b) << endl;
    cout << ( a>=b) << endl;
    cout << ( a==b) << endl;
    cout << ( a!=b) << endl;

    if( a>b ) 
    {
        cout<< "A is greater" << endl;
    } else{
        cout<< "B is greater" << endl;

    }

*/

/*
3. RELATIONAL OPERATORS --> Allow us to combine one or more logical operators or conditions
  
*/

/*
Examples -->

    if( a<b && b != 0 ) {
        cout<< "Result 1 -> TRUE" << endl;
    } else{
        cout<< "Result 2 -> FALSE" << endl;
    }
//in this case first statment is false hence it wil not evaluate 2nd statment directly gotes to else block
    if( a<b && ( b = 0 )) {
        cout<< "Result 1 -> TRUE" << endl;
    } else{
        cout<< b << endl;
    }


    if( a>b || b == 0 ) {
        cout<< "Result 1 -> TRUE" << endl;
    } else{
        cout<< "Result 2 -> FALSE" << endl;
    }
*/

/*

4. BITWISE OPERATOR -> same as logical operator but it works on individual bits
*/
/*
// Example --> 

    cout << ( 2 & 1 ) << endl;
    cout << ( 2 | 1 ) << endl;
    cout << ( 2 ^ 1 ) << endl;
    cout << ( 4 >> 1 ) << endl;
    cout << ( 2 << 1 ) << endl;
    cout << ( ~4 ) << endl;

int num1 = 5; --> 0101
int num2 = 8; --> 1000

 cout << (num1 & num2 ) << endl;
 0101
 1000
--------------
 0000   ---->  O/p = 0

 cout << (num1 | num2 ) << endl;
 0101
 1000
--------------
 1101   ---->  O/p = 13


*/

/*
// 5. Ternary Operator = ?: -->
// condition? expresseion 1( if true):espression 2

    int c;
    if(a>b){
        c = a;
    }else{
        c = b;
    }
    
    // OR

    c =  ( a>b ) ? a : b;
*/

/*
 6. Unary Operator --> Works only on one operand

    ++ --> Increment
    -- --> Decreement

    a = 1;
    int c = a++; // Post increement
// first assign a value to c and then do increement
    cout << c << endl ; // c= 1
    cout << a << endl ; // a = 2
    a = 1;
    c = ++a; // Pre increment
// First increase the value then assign it to c
     cout << c << endl ; // c= 2
     cout << a << endl ; // a = 2

*/

/* 
      a = 1;
    int c = a--; // Post Decreement
// first assign a value to c and then do Decreement
    cout << c << endl ; // c= 1
    cout << a << endl ; // a = 0
    a = 1;
    c = --a; // Pre Decreement
// First Decrease the value then assign it to c
     cout << c << endl ; // c= 0
     cout << a << endl ; // a = 0

*/

/*
//Shortcut assignment operators
    += 
    -=
    *=
    etc


    c = c+a; // is same as c += a
    c += a; // is same as c = c+a
    c -= a;// is same as c = c-a
    c *= a;// is same as c = c*a
    c /= a;// is same as c = c/a
    
*/
/*
// Other Operators
    1. sizeof - size in bytes occupied by variable
    2. new - allocate space to vaiable
    3. delete - free that allocataed space
    4. & (address of operator) - return address of stored variable
    5. *(derefrencing operator) - return value stored at that address
    6. ? - Conditional Operator
    7. Comma Operator (,) -> Acts as both operator and separator
    --> 
    .
    Cast  - convert one data type to other
*/
/*
    char ch = 'a';
    //Cast
    int (ch) ; -- will given 97
    cout << sizeof(a) << endl;

// This topic is not clear yet
    int *ptr = new int (10);
    // delete ptr;
    cout << ptr << endl;
    ptr = &a;
     cout << a << endl;
    b = *ptr;
     cout << b << endl;


     
    
*/
    



/*
<< - Insertion operator - cout
 It inserts data into the output stream (cout), which means it sends the data to the console (screen)

 >> - extraction operator - cin
 It extracts data from an input stream (like cin) and stores it into a variable.

*/
// \n -> endl




//Operator Precedance Chart -- BODMAS
}
