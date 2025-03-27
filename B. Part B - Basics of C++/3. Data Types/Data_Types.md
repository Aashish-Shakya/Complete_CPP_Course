1 BYTE == 8 BITS
Bit is the smallest unit of storage.

1 BYTE = 8 BITS

DATA TYPES
--> It defines the type of data a variable can store, how much space it will occupy, and what operations can be performed on it.

TYPES 
    1. Primitive Data Types 
    2. Derived Data Types  
    3. User Defined Data Types  
  

1. PRIMITIVE DATA TYPES
--> INBUILT / by default provided by the compiler

    1. Integer
        keyword -> int
        requires 4 bytes of space
      Signed range -> -2147483648 to 2147483647  OR -2^31 TO 2^31 -1
            A. LONG  -> 8 Bytes
            B. SHORT -> 2 Bytes
         
    Unsigned Range -> 2^32 -1 

# Note -> Range Concept Explained here - https://www.youtube.com/watch?v=cnT1oW5_ePM&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24
From 4:00

    2. Character
        keyword -> char
        requires 1 byte of space
        range -> -128 to 127 [signed char] or 0 to 255 [unsigned char]

    3. Boolean
        keyword -> bool
        Stores either 0[false] or 1[true]
        requires 1 byte of space
         
    4. Floating Point  
        keyword -> float
        requires 4 bytes of space
        Stores decimal points UP TO 7 DIGITS
         
    5. Double Floating Point
        keyword -> double
        requires 8 bytes of space
        Stores double precision floating values UP TO 15 DIGITS

    6. Void
        keyword -> void
        Has no value

2. DERIVED DATA TYPES
--> Extension of certain data types to achieve certain functionality

    1. Array     -> Used for storing homogeneous data contiguously
    2. Pointer   -> Used to store the address of a memory location
    3. Reference -> Used as a reference variable

3. USER DEFINED / ABSTRACT DATA TYPES

    1. Classes -> Building block of OOP
       -> Used for combining heterogeneous data values and certain operations that can be performed on those values
    2. Structures and Unions -> Used for storing heterogeneous data together
    3. Enum -> Allows a variable to hold values from a given list of permitted values
    4. Typedef -> Allows for providing meaningful names for data types
*/

/*
Data Type Modifiers - Used with primitive data types to modify the length of data

1. Signed   -> int, char
2. Unsigned -> int, char
3. Long     -> int, double
4. Short    -> int
 
