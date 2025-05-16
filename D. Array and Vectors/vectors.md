# Vectors in C++

A **vector** in C++ is a dynamic array provided by the Standard Template Library (STL). 
It allows for flexible resizing and provides various utility functions for managing collections of elements.

--> Same like array but dynamic in nature



# STL - 
- STandard Template Libraray
- WHich contains implementation of many Data structure 
- We pick those DS container implementation from STL library and start using them in our code



## Key Features of Vectors
1. **Dynamic Sizing**: Vectors automatically resize themselves when elements are added or removed.
2. **Random Access**: Elements can be accessed in constant time using an index.
3. **Memory Management**: Vectors handle memory allocation and deallocation internally.
4. **Rich Functionality**: Built-in methods for adding, removing, and searching elements.




## Syntax to Declare a Vector

```cpp
#include <vector> //Need to include this for vector
 
vector<int> myVector; 

vector<int> myVector = {1,2,3};  

vector<int> myVector(3,0); // [It will create a vector of 3 size and store 0 on all three place]  

```


# Vector Function
- Size
- push_back
- pop_back
- front
- back
- at

## Accessing Elements
Use the [] operator or the at() method.

int value = myVector[0]; // Access the first element
int value2 = myVector.at(0); // Access the first element safely
 
## Size and Capacity
Use size() to get the number of elements and capacity() to check the allocated memory.

```c++
vector<int> myVector = {1, 2, 3};

cout << myVector.size()  << endl; // Number of elements

cout << myVector.capacity(); // Allocated memory

 ```


# Adding Elements
Use push_back() to add an element to the end of the vector.

```c++
myVector.push_back(10); // Adds 10 to the vector end
```

# Removing Elements
Use pop_back() to remove the last element.

```c++
myVector.pop_back(); // Removes the last element
```


# First Elements
Use front() to access first element of an vector.

```c++
myVector.front(); // Give the First element
```

# Last Elements
Use back() to access Last element of an vector.

```c++
myVector.back(); // Gives the last element
```


# Iterating Over Elements
Use a loop or iterators to traverse the vector.

## For Each Loop
```cpp
// In this for each loop the val/i  act as the value itself instead of the index

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> myVector = {1, 2, 3};

    for (int val : myVector)
    {
        cout << val << " ";
    }
    return 0;
}
```

# Example
```c++
Example Code
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    // Adding elements
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Accessing elements
    cout << "Accesssing element: " << numbers[0] << endl;
    cout << "Using at(): " << numbers.at(0) << endl;
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Iterating over elements
    cout << "All elements: ";

    // for each loop
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Removing the last element
    numbers.pop_back();

    cout << "After pop_back, size: " << numbers.size() << endl;

    return 0;
}
```

# Static Vs Dynamic Allocation
Static Memory is allocated while compilation
Dynamic is allocation while execution of code / runtime
Vector use dynamic memory allocation
Stack Memory - Static allocation
Heap Memory - Dynamic allocation


// How vector is dynamic -> In system whenevre you are changing the vecroty size it deletes the old array and creates a new one with same name and double the capacity thats how it is resizable 


```c++
int main() {
    vector<int> numbers;
 
 //intiall capacity , size 0 then 
    numbers.push_back(1); // size= 1, capacity = 2
    numbers.push_back(2);// size= 2, capacity = 2
    numbers.push_back(3);// size= 3, capacity = 4


cout << vec.size() << endl;
cout << vec.capacity() << endl;

```
# When to Use Vectors
Use vectors when you need a resizable array.
Ideal for scenarios where the size of the data is not known at compile time.



# Notes
Accessing elements out of bounds (e.g., myVector[100] when the vector has fewer elements) leads to undefined behavior. Use at() for bounds-checked access.
Frequent resizing can be costly in terms of performance. Reserve memory upfront using reserve() if you know the approximate size.
