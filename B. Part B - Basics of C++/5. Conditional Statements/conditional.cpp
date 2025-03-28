#include <iostream>
using namespace std;



void isEven(int num){
    if(num%2 == 0) {
        cout << num << " is even!" << endl;
    } else {
        cout << num << " is odd!" << endl;
    }
}
void signOfNumber(int num){
    if(num < 0){
    cout << num << " is negative!" << endl;
    } else if (num > 0){
    cout << num << " is positive !" << endl;
    }else {
    cout << num << " is zero !" << endl;
    }
}
int main(){
    int choice, num;

    cout <<"1. Check if even" << endl;
    cout <<"2. Check the sign of the number" << endl;
    cout <<"3. Exit" << endl;
    cout <<"Enter your choice: ";

    cin >> choice;

    switch(choice){
        case 1:
            cout << "Enter number" << endl;
            cin >> num;
            isEven(num);
            break;
        
        case 2:
            cout << "Enter number" << endl;
            cin >> num;
            signOfNumber(num);
            break;
        case 3:  
        default:
            cout << "Please enter a valid choice";

    }
    return 0;
}

/* NOTE
Logical &&,|| VS Bitwise |,&
// Logical Always start executing from left 
ex -> if(fasle && 4/0 ) --> read false first and stops there and give o/p false

whereas
In case of bitwise it will evaluate both side then do &
as result 4/0 is error so this will throw error
if(fasle & 4/0 )  --> error

*/