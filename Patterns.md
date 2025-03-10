# Heading 1
## Heading 2
### Heading 3
#### Heading 4
##### Heading 5


# Box Patterns - Reactangle / Square

/*
Question 1 - Square Pattern With Numbers
n = 4
    1234
    1234
    1234
    1234
*/


/*
  Question 2 - Square Pattern With Stars
n = 4 
        * * * *
        * * * *
        * * * *
        * * * *

*/


/*
  Question 3 - Square Pattern With cHARS
n = 4 
        ABCD
        ABCD
        ABCD
        ABCD

*/


/*
Question 4 - Square Pattern With INCREASING  Numbers
n = 4
    123
    456
    789

*/

/*
Question 5 - Square Pattern With INCREASING  Chars
  n=3
        ABC
        DEF
        GHI

*/


/* 
 Question 6 - Rectange Pattern With Stars

r = 5
c = 4

        0 1 2 3
0       * * * *
1       * * * *
2       * * * * 
3       * * * *
4       * * * *

*/

/* 
 Question 7 - Hollow Rectange Pattern With Stars
 
r = 5
c = 4

        0 1 2 3
        
0       * * * *
1       *     *
2       *     *
3       *     *
4       * * * *

*/


# Triangle/Half Pyramid Patterns

/*
Question 8 - Triangle or Half Pyramid Pattern With Stars
 
n = 5

0       *  
1       * *
2       * * *
3       * * * *
4       * * * * *

*/


/*
Question 9 - Triangle or Half Pyramid Pattern Using Numbers

n = 5
 
0       1  
1       22
2       333
3       4444
4       55555

*/


/*
Question 10 - Triangle or Half Pyramid Pattern With Char
 
n = 5

i
Index|  Pattern 
0    |   A  
1    |   BB
2    |   CCC
3    |   DDDD
4    |   EEEEE

*/


/*
Question 11 - Triangle or Half Pyramid Pattern With Number
 
n = 5

i
Index|  Pattern 
0    |   1  
1    |   12
2    |   123
3    |   1234
4    |   12345

*/

/*
Question 12 - Reverse Triangle or Half Pyramid Pattern With Numbers
 
n = 5

i
Index|  Pattern 
0    |   1  
1    |   21
2    |   321
3    |   4321
4    |   54321

*/

/*
Question 12 - Reverse Triangle or Half Pyramid Pattern With Numbers
 
n = 5

i
Index|  Pattern 
0    |   12345 
1    |   1234
2    |   123
3    |   12
4    |   1

*/


/*
Question 13 - Reverse Triangle or Half Pyramid Pattern With chARS
 
n = 5

i
Index|  Pattern 
0    |   A  
1    |   BA
2    |   CBA
3    |   DCBA
4    |   EDCBA

*/


/*
Question 14 - Floyd's Triangle  Pattern With Numbers
 
n = 4

i
Index|  Pattern 
0    |   1  
1    |   23
2    |   456
3    |   78910

*/


/*
Question 15 - Floyd's Triangle  Pattern With CHars
 
n = 4

i
Index|  Pattern 
0    |   A  
1    |   BC
2    |   DEF
3    |   GHIJ

*/


/*

Question 16 - inverted Triangle or Half Pyramid Pattern With Stars
 
n = 5

Index|  Pattern 
0    |   *****  
1    |   ****
2    |   ***
3    |   **
4    |   *

*/


/*
Question 17 - Inverted Triangle or Half Pyramid Pattern With Stars after 180 rotation  
n = 5

Index|  Pattern 
0    |   *****  
1    |    ****
2    |     ***
3    |      **
4    |       *

*/


/*
Question 18 - Inverted Triangle or Half Pyramid Pattern With Stars after 180 rotation
 
n = 5

Index|  Pattern 
0    |       *  
1    |      **
2    |     ***
3    |    ****
4    |   *****

*/


/*
Question 19 - Inverted Triangle or Half Pyramid Pattern With Numbers
 
n = 5

Pattern |Index  | Space  
11111      0        0
 2222      1        1
  333      2        2
   44      3        3
    5      4        4

*/

/*
Question 19 - Inverted Triangle or Half Pyramid Pattern With Numbers
 
n = 5

Pattern |Index  | Space  
11111      0        0
2222      1        1
333      2        2
44      3        3
5      4        4

*/

/*
Question 20 - Inverted Triangle or Half Pyramid Pattern With Charcters
 
n = 5

Pattern |Index  | Space  
AAAAA      0        0
 BBBB      1        1
  CCC      2        2
   DD      3        3
    E      4        4

*/

/*
 0-1 pattern

n=5

 1
 01
 101
 0101
 10101


 i+j => even

*/

# Pyramid Patterns


/*
Question 21 -  Pyramid Pattern With Numbers
 

n = 4
             i
Pattern     |Index  | Space
   1          0        3
  2 2         1        2
 3 3 3      2        1
4 4 4 4       3        0


*/


/*
 pattern

n=5

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5


rows - 1 to n
 space -> n-i
 star -> n

*/
/*
Question 21 -  Pyramid Pattern With Numbers
 

n = 4
             i
Pattern     |Index  | Space
   1          0        3
  121         1        2
 12321        2        1
1234321       3        0


*/

/*
Question 22 -  Pyramid Pattern With Chars
 

n = 4
             i
Pattern     |Index  | Space
   A          0        3
  ABA         1        2
 ABCBA        2        1
ABCDCBA       3        0


*/

/*
Question 23 -  Pyramid Pattern With sTARS
 

n = 4
             i
Pattern     |Index  | Space
   *          0        3
  ***         1        2
 *****        2        1
*******       3        0

No of stars - 1 3 5 7 . . .  

*/


/*
Question 21 -  Plandromic

n = 5
             i
Pattern     |Index  | Space
    1          1        4
   212         2        3
  32123        3        2
 4321234       4        1
 543212345     5        0


*/




# Diamond Patterns

/*
Question -  DIAMOND PATTERN


n = 4

                     INDEX    Spaces     Stars
   *                   1         3           1
  ***                  2         2           3
 *****                 3         1           5
*******                4         0           7
*******                4         0           7
 *****                 3         1           5
  ***                  2         2           3
   *                   1         3           1

Relationship


Upper  -> 1 to n
Spaces -> n-i
Stars  ->  2*i -1

Lower  -> n to 1
Spaces -> n - i
Stars  ->  2*i - 1 


*/


/*

Question -  Hollow DIAMOND PATTERN


n = 4

                     INDEX    Spaces     Stars
   *                   1         3           1
  * *                  2         2           3
 *   *                 3         1           5
*     *                4         
*     *          
 *   *                 3         1           5
  * *                  2         2           3
   *                   1         3           1

Relationship


Upper  -> 1 to n
Spaces -> n-i
Stars  ->  2*i -1

Lower  -> n to 1
Spaces -> n - i
Stars  ->  2*i - 1


*/

/*

Question -  Hollow DIAMOND PATTERN inscribed in a rectangle



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

Relationship


Upper  -> 1 to n
Spaces -> n-i
Stars  ->  2*i -1

Lower  -> n to 1
Spaces -> n - i
Stars  ->  2*i - 1


*/

# ButterFly Pattern
/*

Question -   BUTTERFLY PATTERN

n = 4
                          Space
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *



Relationship
i = Row no.

Upper  -> 1 to n
Stars -  i
Spaces ->   --> 2(n-i)
Stars  ->  i

Lower  -> n to 1
Stars -  i
Spaces -> > 2(n-i)
Stars  ->  i

*/



/*
Rhombus

n=5

    *****
   *****
  *****
 *****
*****


rows - 1 to n
 space -> n-i
 star -> n

*/



/*

// Difficult one dekhe kiya
/*
Question -  ZIG ZAG PATTERN

        |
        |
        |
        |  *   *
        | * * * *
        |*   *   *
        |________________________________-





*/


## Pending Patterns
<!--  

1. Pascal's triangle
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1


2. Diamond INscribed in Rectangle
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


3. hollow rohmbus
4. hollow butterfly
5. Diamond 
6. Hollow Diamond

7. Problem 3 : Given height h and width w, print a rectangular pattern as shown in the example below.
Example: h=4,w=6
*.*.*.
.*.*.*
*.*.*.
.*.*.*


8. Problem 2 Given n, print a triangular pattern as shown in the example below.
Example if n=4
   1
  2 2
 3   3
4     4




9. Write a program to print the cross pattern given below (in the shape of X): (Medium)
 *   *
  * *
   *
  * *
 *   *


Q10.  Write a program to print alphabet diamond pattern:
 
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
 
Assignment Questions

 
Q11- Write a program to print + pattern given below : (Medium)
  *
  *
*****
  *
  *

Q12 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

n=6
       2
      3 5
    7 11 13
  17 19 23 29
 31 37 41 43 47
53 59 61 67 71 73














 -->

