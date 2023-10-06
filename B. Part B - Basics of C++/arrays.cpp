#include <iostream>
using namespace std;

/*
Array -> Is a collection of Homogeneous item store in cotinuous memroy location
        |   |   |   |   |   |   |   |   |
index:    0   1   2   3   4   5   6   7
 */

int main(){
    int mark1, mark2, mark3, mark4;

// Declaration of Array --> 3 ways
    int arr1[7]; //Assign garbage value in starting to ech index
    int arr2[10] = {1, 2, 3}; // Allocate 0 value to rest of the indexes elements
    int arr3[] = {1, 2, 3, 4};

/*
// Accessing array element
    cout << arr1[4] << endl; // It will always give random value [Garbage value]
    cout << arr2[2] << endl;
    cout << arr3[1] << endl;
*/
/*

// Size of array -- Always in Bytes
     cout << sizeof(arr1) << endl;  // Size = 4*number of element 
     cout << sizeof(arr1[0]) << endl;  // One index == 4 bytes
     cout << sizeof(arr1)/sizeof(arr1[0]) << endl; // OR Size = number of element
    
    // We can't change the size after declaration of an Array
*/

// Iteration 
    for(int indx = 0; indx<10; indx++ ){
        cout << arr2[indx]  << endl;
    }

    return 0;




}

