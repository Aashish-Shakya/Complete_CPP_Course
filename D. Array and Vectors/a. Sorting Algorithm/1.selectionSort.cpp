#include <iostream>
#include <climits>
using namespace std;

// Selection sort
//   Find the minimum element in unsorted array and swap it with element at beginning


int main()
{
  int size;
  cout << "Enter size of array ";
  cin >> size;
  int arr[size];
  cout << "Enter element of  array ";
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  // int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size - 1; i++)
  {
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }

    if (minIndex != i)
    {
      swap(arr[i], arr[minIndex]);
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}

// Max chocolate in video 8.3.2

/*
// Complexity Analysis
Worst Case Time Complexity - O(n^2)
Best Case Time Complexity - O(n^2)
Avg Case Time Complexity - O(n^2)

Space Complexity - O(1)


*/