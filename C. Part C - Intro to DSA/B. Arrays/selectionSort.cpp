#include <iostream>
#include <climits>
using namespace std;

//Selection sort
//  Find the moinimum element in unsorted array and swap it with element at beginning



//bubble sort
// Reapetedly swap two adjacent elements if they are in wrong order
// Outer - n elemnts - then n-1 iteration will got
// Inner - n elemnts - then n-i iteration will got
 
 
int main()
{

    int n;
    cout << "Enter size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter element of  array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  for(int i =0; i<n-1;i++){
    for (int j = i+1; j < n; j++)
    {
     if(arr[j] < arr[i]){
         int temp = arr[j];
         arr[j] = arr[i];
         arr[i] = temp;
     }
    }
    
    
  }
  for (int i = 0; i < n; i++)
  {
      cout << arr[i];
  }
    return 0;
}




// Max chocolate in video 8.3.2