#include <iostream>
using namespace std;
/*
Function --> Are block of code that are designed to perform a specific task.
* Is to promote modularity and Reusability of code

SYNTAX ->

returnType functionName(parameter1, parameter2, ....){
    // function body
}

*/
 
//1. function declaration : return_type functionName(formal parameters);
void greeting();
//2. Function Defination :
void greeting(){
    cout << "Hello" << endl;
    }
 

bool isLeapYear(int); //Declaration - not mandatroy but recmmended

bool isLeapYear(int year){
    if(year%100 == 0){
        if(year%400 == 0)
        return true;
    else
        return false;
    } else if(year%4 ==0){
        return true;
    
    } else  
        return false;

}

void checkIfLeapYear(int year){
    if(isLeapYear(year)){
        cout << year << " is a leap year" << endl;
     }else{
        cout << year << " is not a leap year" << endl;

     }
  
}

//Fun to add to numbers
int add(int a, int b){
     int sum = a+b;
     
    return sum;
}
int main(){

int year = 2024;
//Calling a funtion
greeting();
checkIfLeapYear(year);

int a =2;
int b= 4;
cout << add(a,b) << endl;;

}

/*
Note ->
    * Only names of vaiables are passed and not their types while calling a fn
    * We pass the valusse, not variables themselves, Local variable are created in fn which are destoryed on returning from them.
    * A fn can be called from any other fn or main fn
*/

/*Control Flow -->Concept of Call stack 

Stack Frame
    fn call --> Memory assigned --> code,vaiables,parameters
Its just like a book stack we can do push and pop only at the top.
and Topmost stack frame is active frame and 
On calling a fn its stack frame pushed and after return its got remover/popped from stack frame.

*/