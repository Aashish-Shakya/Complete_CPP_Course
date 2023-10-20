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

length == sizeof(arr)/sizeof(arr)(arr[0]) = 4

** What if we only declare a array and didn't initialize it tehn it will store garbage value in the array
int arr[4]; - Declaration


# Transversiing in array

1. By For Loop
2. By for each loop
``` c++
for(int i:arr){
        cout<<i<<end;
}
```

3. While loop
 */
