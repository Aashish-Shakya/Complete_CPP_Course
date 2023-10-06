#include <iostream>
using namespace std;

/*
Loop --> Is a statement that allows us to xecute a statement or group of statement multiple times
Types ->

F1. or Loop
2. While Loop
3. Do While Loop
4. Nested Loop

Loop Control Statement --> CHange execution from its normal sequence

1. break -> Used to come out of the loop
2. continue -> Used to skip the next iteration
3. goto -> Tranfer control to the labeled statement

*/

void printUsingFor(int n) {
/*
 For Loop Syntax :-

    for(exp1;exp2;exp3){
        block of statement
    }

exp1 -> initialisation
exp2 -> condition
exp3 -> modification/update statement

Flow of execution

exp1 --> exp2 --> block of statement --> exp3 --> exp2 -->block of statement --> exp3... 
*/

    for(int i = 1; i<=n; i++){
        cout << i << endl;
    }
}

void printUsingWhile(int n){
/* Syntax :-

while(condition){
    block of statement
}
    
*/
    int i = 0;
    while(i<=n){
        cout << i << endl;
        i++;
    }
        // OR

    // while(true){
    //     if(i>n){
    //         break;
    //     }
    //     cout << i << endl;
    //     i++; 
    // }

//Print Only Odd
    // while(true){
    //     i++;
    //     if(i>n){
    //         break;
    //     }
    //     if(i%2 == 0){
    //         continue;
    //     }
    //     cout << i << endl;
        
    // }
}

void printUsingDoWhile(int n){

/* Syntax ->  executed  atleast once
    do{
        block of statement
    } while(condition);
*/
    int i = 0;
    do {
        cout << i << endl;
        i++;
    }while(i<=n);
}

void printUsingNested(int n){

}

int main(){
    // printUsingFor(20);
    // printUsingWhile(5);
    printUsingDoWhile(20);
}