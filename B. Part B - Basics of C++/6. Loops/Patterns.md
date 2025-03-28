
# Box Patterns - Rectangle / Square

```cpp
// Question 1 - Square Pattern With Numbers
n = 4
    1234
    1234
    1234
    1234
```

```cpp
// Question 2 - Square Pattern With Stars
n = 4 
    * * * *
    * * * *
    * * * *
    * * * *
```

```cpp
// Question 3 - Square Pattern With Chars
n = 4 
    ABCD
    ABCD
    ABCD
    ABCD
```

```cpp
// Question 4 - Square Pattern With Increasing Numbers
n = 4
    123
    456
    789
```

```cpp
// Question 5 - Square Pattern With Increasing Chars
n = 3
    ABC
    DEF
    GHI
```

```cpp
// Question 6 - Rectangle Pattern With Stars
r = 5
c = 4
    * * * *
    * * * *
    * * * *
    * * * *
    * * * *
```

```cpp
// Question 7 - Hollow Rectangle Pattern With Stars
r = 5
c = 4
    * * * *
    *     *
    *     *
    *     *
    * * * *
```

# Triangle/Half Pyramid Patterns

```cpp
// Question 8 - Triangle or Half Pyramid Pattern With Stars
n = 5
    *
    * *
    * * *
    * * * *
    * * * * *
```

```cpp
// Question 9 - Triangle or Half Pyramid Pattern Using Numbers
n = 5
    1
    22
    333
    4444
    55555
```

```cpp
// Question 10 - Triangle or Half Pyramid Pattern With Char
n = 5
    A
    BB
    CCC
    DDDD
    EEEEE
```

```cpp
// Question 11 - Triangle or Half Pyramid Pattern With Number
n = 5
    1
    12
    123
    1234
    12345
```

```cpp
// Question 12 - Reverse Triangle or Half Pyramid Pattern With Numbers
n = 5
    1
    21
    321
    4321
    54321
```

```cpp
// Question 13 - Reverse Triangle or Half Pyramid Pattern With Numbers
n = 5

    12345 
    1234
    123
    12
    1
```

```cpp
// Question 14 - Reverse Triangle or Half Pyramid Pattern With Chars
n = 5
    A
    BA
    CBA
    DCBA
    EDCBA
```

```cpp
// Question 15 - Floyd's Triangle Pattern With Numbers
n = 4
    1
    23
    456
    78910
```

```cpp
// Question 16 - Floyd's Triangle Pattern With Chars
n = 4
    A
    BC
    DEF
    GHIJ
```

```cpp
// Question 17 - Inverted Triangle or Half Pyramid Pattern With Stars
n = 5
    *****
    ****
    ***
    **
    *
```

```cpp
// Question 18 - Inverted Triangle or Half Pyramid Pattern With Stars after 180 rotation  
n = 5
    *****
     ****
      ***
       **
        *
```

```cpp
// Question 19 - Inverted Triangle or Half Pyramid Pattern With Stars after 180 rotation
n = 5
        *
       **
      ***
     ****
    *****
```

```cpp
// Question 20 - Inverted Triangle or Half Pyramid Pattern With Numbers
n = 5
    11111
     2222
      333
       44
        5
```

```cpp
// Question 21 - Inverted Triangle or Half Pyramid Pattern With Numbers
n = 5
    11111
    2222
    333
    44
    5
```

```cpp
// Question 22 - Inverted Triangle or Half Pyramid Pattern With Characters
n = 5
    AAAAA
     BBBB
      CCC
       DD
        E
```

```cpp
// Question 23 - 0-1 pattern

n=5

 1
 01
 101
 0101
 10101

> Hint - i+j => even
```
 
# Pyramid Patterns

```cpp
// Question 24 - Pyramid Pattern With Numbers
n = 4
      1
     2 2
    3 3 3
   4 4 4 4
```

```cpp
// Question 25 - Pyramid Pattern With Numbers
n = 4
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

rows - 1 to n
space -> n-i
star -> n
```

```cpp
// Question 26 - Pyramid Pattern With Numbers

n = 4
             i
Pattern     |Index  | Space
   1          0        3
  121         1        2
 12321        2        1
1234321       3        0

```

```cpp
// Question 27 - Pyramid Pattern With Chars
n = 4
      A
     ABA
    ABCBA
   ABCDCBA
```

```cpp
// Question 28 - Pyramid Pattern With Stars
n = 4
      *
     ***
    *****
   *******
- No of stars - 1 3 5 7 . . .  
```

```cpp
// Question 29 -  Plandromic

n = 5
             i
Pattern     |Index  | Space
    1          1        4
   212         2        3
  32123        3        2
 4321234       4        1
543212345     5        0

```
**Note** - Have to do these one pending
s
# Diamond Patterns

```cpp
// Questionn 30 - Diamond Pattern
n = 4
      *
     ***
    *****
   *******
   *******
    *****
     ***
      *
```
> Hint -   Find Relationship   
    Upper  -> 1 to n    
    Spaces -> n-i   
    Stars  ->  2*i -1   
    Lower  -> n to 1  
    Spaces -> n - i  
    Stars  ->  2*i - 1   


```cpp
// Question 31 - Hollow Diamond Pattern
n = 4
      *
     * *
    *   *
   *     *
   *     *
    *   *
     * *
      *
```

```cpp
// Question 32 - Hollow Diamond Pattern Inscribed in a Rectangle
        *********
        **** ****
        ***   ***
        **     **
        *       *
        *       *
        **     **
        ***   ***
        **** ****
        *********
```

# Butterfly Pattern

```cpp
// Question 33 - Butterfly Pattern
n = 4
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
```

```cpp
// Question 34 - Hollow Butterfly Pattern
n = 4
            *             *
            * *         * *
            *   *     *   *
            *     * *     *
            *     * *     *
            *   *     *   *
            * *         * *
            *             *

```

# Miscellanious Pattern

```cpp
// Question 35 - Rhombus Pattern
n = 5
       *****
      *****
     *****
    *****
   *****
```

```cpp
// Question 36 - Hollow Rhombus Pattern
n = 5
         *****
        *   *
       *   *
      *   *
     *****
```

```cpp
// Question 37 - Zig-Zag Pattern
        *   *
       * * * *
      *   *   *
```

```cpp
// Question 38 - Pascal's Triangle - 
 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

Hint - we can also use nCr to solve this
```

```cpp
// Question 39 - Given height h and width w, print a rectangular pattern as shown in the example below.

Example: h=4,w=6

*.*.*.
.*.*.*
*.*.*.
.*.*.*

```

```cpp
// Question 40 - Given n, print a triangular pattern as shown in the example below.

Example : n=4
   1
  2 2
 3   3
4     4
```

```cpp
// Question 41 -  Write a program to print the cross pattern given below (in the shape of X)
 *   *
  * *
   *
  * *
 *   *
```

```cpp
// Question 42 - Write a program to print alphabet diamond pattern:
 
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
```

```cpp
// Question 43 - Write a program to print + pattern given below : (Medium)
        *
        *
      *****
        *
        *
```

```cpp
// Question 44 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

n=6
       2
      3 5
    7 11 13
  17 19 23 29
 31 37 41 43 47
53 59 61 67 71 73
```

