# Memory Addresses
- When we create a varialble in system it occupy a space which have a unique address in form of Hexadecimal Number

Address of Operator -> & 

```cpp
int main()
{
    int a = 10;

    cout << &a << endl;

    return 0;
}
``` 
> O/p -> 0x61ff0c


# Pointers
- Special variables that stores address of another variables

for example
int a = 10;
int* ptr = &a;  --> This is a pointer which stores address pf variable a
And ptr has its own address diff from varialble

```cpp

// 0x -- starting point og addresses

int main()
{
    int a = 10;
    int* ptr = &a;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    return 0;
}

> o/p - 
0x61ff0c
0x61ff0c
0x61ff08
```


# Pointer to Pointer


```cpp
int main()
{
    int a = 10;
    int* ptr = &a;
    int** ptr1 = &ptr;
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr1 << endl;

    return 0;
}
> O/P
0x61ff08
0x61ff08
0x61ff04
0x61ff04
```

# * -> Dereference Operator
- Value at address
&a -> This will give addres of a and
*(&a) -> Will give value stored at &a

```cpp
int main()
{
    int a = 10;
    cout << *(&a) << endl;
    cout <<  a << endl;

    int *ptr = &a;
    int **ptr1 = &ptr;

    cout <<  &a << endl;
    cout << *(ptr1) << endl;
    cout << (ptr) << endl;
    cout << **(ptr1) << endl;

    return 0;
}

O/p

10
10
0x61ff0c
0x61ff0c
0x61ff0c
10

```

# Null Pointer
A pointer that doesn't point to any location.  -> 0x0

int* ptr = NULL;




# Practice question

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a; // p = address of a - 0xa
    int **q = &p; // q = 0xp

    cout << *p << endl;  //5
    cout << **q << endl;  //5
    cout << p << endl;  //0xa
    cout << *q << endl; // 0xa

    return 0;
}
\
o/p
5
5
0x61ff08
0x61ff08


```


# Pass by Reference
By two types
> Pointer

```cpp
#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << a << endl;
    return 0;
}

```

> References using alias

```cpp
#include <iostream>
using namespace std;

void changeA(int &b)
{
    b = 40;
}

int main()
{
    int a = 10;

    changeA(a);

    cout << a << endl;
    return 0;
}

```



# Array Pointers

- Name of the array is the pointer which shows 1st eleemt of array known as constant pointers we can't change it once it is declared

```cpp
int main()
{
  int arr[] = {1,2,3,4,5};

  cout << arr << endl;
  cout << *arr << endl;
  cout << &arr[0] << endl;

   
    return 0;
}

O/P
0x61fefc
1
0x61fefc
```


# Pointer Arithmetic

- Increment / Decrement
In pointer it will increase or decrease the size of the pointer type 


```cpp
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl; // as int is size f 4 byte then ptr increase by 4

    cout << ptr << endl;
    ptr--;
    cout << ptr << endl; // as int is size f 4 byte then ptr decrease by 4

    return 0;
}

O/P

0x61fef4
0x61fef8
0x61fef8
0x61fef4

```


# Subtraction/Addition

```cpp

int main()
{
 

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr = ptr + 2; // it will add 8 bytes as int in 4byte
    cout << ptr << endl;
    
    cout << ptr << endl;
    ptr = ptr + 2; // it will sibtract 8 bytes as int in 4byte
    cout << ptr << endl;

    return 0;
}

O/P
0x61fef4
0x61fefc
0x61fefc
0x61ff04





int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int a = 10;
    int *ptr = &a;

    cout << *arr << endl; // 1
    cout << *(arr+1) << endl; // 2
    cout << *(arr+2) << endl; // 3
    cout << *(arr+3) << endl; //4
    cout << *(arr+4) << endl; //5

    return 0;
}

O/P
1
2
3
4
5




int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr2;
    int *ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2;

    return 0;
}


# CPOnsitional


int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr1;
    int *ptr2;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1 < ptr2) << endl;
    cout << (ptr1 > ptr2) << endl;
    cout << (ptr1 <= ptr2) << endl;
    cout << (ptr1 >= ptr2) << endl;
    cout << (ptr1 == ptr2) << endl;
    cout << (ptr1 != ptr2) << endl;

    return 0;
}


O/p
0x401b9b
0x61ff54
1
0
1
0
0
1
```