#include <iostream>
using namespace std;

/*
Question -> Write a program to reverse a number

*/

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;


    //  //My COde
// string rnum = "";
// int lastdigit =0;
 

//     while(num>0){
//         lastdigit = num%10;
//         rnum +=  to_string(lastdigit)  ;
//         num = num/10;
//     }
        
//     cout << rnum;
 

//Provide SOl
int rnum = 0;
int lastdigit =0;
 while(num>0){
        lastdigit = num%10;
        rnum =  rnum*10+lastdigit ;
        num = num/10;
    }
    cout << rnum;
    return 0;
}


/*
Question -> Write a program to reverse a number
1234 --> 4321
Also remove trailing zeroes
For exapmle
100020 --> 20001

*/

// long mthd
int main()
{
    int n ;
    cout << "Enter number" << endl;;
    cin >> n;
    int reversedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        if(lastDigit == 0){
            lastDigit = n/10;
        }
        reversedNumber = reversedNumber * 10 + lastDigit;
        n = n / 10;
    }
    cout << reversedNumber << endl;;

    return 0;
}
