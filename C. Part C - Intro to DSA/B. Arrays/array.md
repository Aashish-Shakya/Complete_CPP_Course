# Array
Is a collection of Homogeneous item store in cotinuous memroy location
                or 
a data structure which stores a collection of Homogeneous items

They have contiguous memory[consecutive blocks of memory].

# Representation of Array

        |   |   |   |   |   |   |   |   |
index:    0   1   2   3   4   5   6   7


## Syntax
### Declaration
dataType arrayname [size];
int arr[5];

### Initialization
int arr[5] = {1,2,3,4};
int arr[] = {1,2,3,4};


# Array Types

1. 1-D array
2. Multi dimensional Array



1. Single Dimension Array

* Accessing any element can be done through indexes
int arr[] = {1,2,3,4};
arr[2] = 3


# Operators on array

1. sizeof(arr) - will return memory occupied by an array
int arr[] = {1,2,3,4};
sizeof(arr) = 16

length == sizeof(arr)/sizeof(int)(arr[0]) = 4

** What if we only declare a array and didn't initialize it tehn it will store garbage value in the array
int arr[4]; - Declaration


# Transversiing in array

1. By For Loop
``` c++
for(int i=0; i<sizel i++>){
        cout<<i<<end;
}
```
2. By for each loop
``` c++
for(int i:arr){
        cout<<i<<end;
}
```

3. While loop
 */

-- Largest Possible Value for any Integer Number = +infinity = INT_MAX
-- Smallest Possible Value for any Integer Number = -infinity = INT_MIN


# Pass by reference
- array always pass as pass by reference automatically

```c++


#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    changeArr(arr, 5);
    cout << "in main\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// So as you can see in this case when we do the changes in array using a function that changes also reflects into the orginal array so we can say tha array always pass as pass by reference


```



# Searchig Algorithm


## 1. Linear Search 
- One of the simplest search algorithm
- Used to search a sepcfic elemnt in an array
- If we found target then return its index else return -1
- iterate each elemnt and compare it with target
- Time complexity = O(n)
```c++


#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << linearSearch(arr, 5, 4);

 
    return 0;
}


```


# Reverse an Array


### We are going to user 2pointer approach - swaping

```c++
/*
Start = 0 -> ++
end = size - 1 -> --
swap(arr[start], arr[end])

tow types array

odd - start = end - break the loop

even - start > end break the loop
*/


#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{

    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

//time complexity - O(n)


/*
Home wprk 

WAF to calculate sum & product of all number in an array

WAF to swap min and max number of an array

WAF to print all unique values in array

WAF to print intersection of 2 array

*/
```