#include <iostream>
using namespace std;


void printUsingFor(int n) {


    for(int i = 1; i<=n; i++){
        cout << i << endl;
    }
}

void printUsingWhile(int n){

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