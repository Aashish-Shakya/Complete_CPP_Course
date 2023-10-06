#include <iostream>
using namespace std;

/*
Question 1. -> find out the sum of all numbers till n


int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int sum;
    for(int i = 0;i<=n; i++){
    //    sum = sum
    +i;
         sum += i;
    }  
    cout << "Sum = " << sum << endl;

}
*/

/*
Question 2. -> Take input from user till user gave any negative input.


int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    while(num>=0)
    {
      cout << num << endl;
      cin >> num;
    }
}
*/

/*
Question 3. ->Take input from user till user gave any negative input.


int main(){
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    do{
        cout << num << endl;
        cin >> num;
    }while(num>0);
*/
/*
Question 4. ->Take input from user till user gave any negative input and find some of it.

*/
int main(){
    int num,sum;
    cout << "Enter a number" << endl;
    cin>> num;

    while(num>0){
        sum += num;
         cout << "Enter a number" << endl;
        cin>>num;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}