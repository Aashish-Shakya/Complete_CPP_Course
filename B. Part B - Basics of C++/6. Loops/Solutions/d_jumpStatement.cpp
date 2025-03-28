#include <iostream>
using namespace std;
/*
Question -> Print numnber till 100 and skip multiplicaton of 3
*/
int main(){
    for(int i = 1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout << i << endl;
    }
}