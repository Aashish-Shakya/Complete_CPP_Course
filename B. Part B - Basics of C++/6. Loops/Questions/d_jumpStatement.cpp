#include <iostream>
using namespace std;
/*
# Loop Control Statement --> CHange execution from its normal sequence

1. break -> Used to come out of the nearest loop statement
2. continue -> Used to skip the next iteration
3. goto -> Tranfer control to the labeled statement
 

Question -> Print numnber till 100 and skip multiplicaton of 3
//Break;
//Continue;
*/
int main(){
    for(int i = 1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout << i << endl;
    }
}