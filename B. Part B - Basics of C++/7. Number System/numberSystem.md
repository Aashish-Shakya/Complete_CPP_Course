# Number System
- How many digits we are using for calculation
- In our day to day life we are using Decimal Number system [0 to 9 = 10 digits]
- Represent a number using different forms using different base value.
- But as you are aware computer only understand the languge of 0 and 1 that's why it uses **Binary Number System**



# Types of Number system

1. Binary - 0,1
2. Decimal - 0,1,2,3,4,5,6,7,8,9
3. Octal - 0,1,2,3,4,5,6,7,
4. Hexal ..0,1,2,3,4,5,6,7,8,9, A, B, C, D ,E
/*

## DECIMAL NUMBER SYSTEM - 
- BASE 10
- Can be writtem in -> 0-9 digits and power of 10
> LET NUMBER BE 1234
  
  1000  100  10   1
  | 1  | 2  | 3 | 4 | 
  10^3 10^2 10^1 10^0

  REPRESENTATION OF 1234 IN DECIAMLA NUMBER SYSTEM
  1234 =  1*1000 + 2*100 + 3*10 + 4*1
       =  1*10^3 + 2*10^2 + 3*10^1 + 4*10^0

  520 -> 5*10 ^ 2 + 2*10 ^ 1 + 0*10^0 


# BINARY NUMBER SYSTEM  
- Base Value =  2
- Can be writtem in -> 0-1 digits and power of 2

> LET NUMBER BE 45

    32   16   8  4  2  1
  | 1  | 0 | 1 | 1 | 0 | 1 | 
    2^5 2^4 2^3 2^2 2^1 2^0

  45 = 1*32 + 0*16 + 1*8 + 1*4 + 0*2 + 1*1 
     = 1*2^5 + 0*2^4+ 1*2^3+ 1*2^2= 0*2^1+ 1*2^0


> Note - How to find digit of number --> we 
  divide   number  by 10 and note the       
  remainder in each step


            Interger only           Digits
    N       (Quotient)N/10     (Remainder)N%10

    1234         123                4

    123           12                3

    12             1                2

    1              0                1

  Check remainder in reverse order we will get  the number. 


# Conversion 
- We can convert a number from one Number system to another 

## CONVERSION FROM 10 --> 2

--> we divide   number  by 10 and note the remainder in each step


            Interger only           Digits
    N       (Quotient)N/2     (Remainder)N%2

    45           22              1

    22           11              0
    
    11            5              1

    5             2              1

    2             1              0

    1             0              1

> Check remainder in reverse order we will get  the number in binary.

 (45) Base 10  ==> (101101) Base 2


Ex -> 14(base 10)

  2 | 14  |
 ---------------
    | 7   | 0
 ---------------     ==> Go from bottom to top
    | 3   | 1        ==>>  1110 (base 2)  == 14
 ---------------
    | 1   | 1
 ---------------
    |

> Note - You can also do this conversion process via code

## CONVERSION FROM 2 --> 10 

### Parity Digit 

- Parity Digit of a number n refers to the remainder it gives when divided by 2. If that reminder is 0, then the parity of the number is even otherwise odd. 
- Parity Digit => n/2 => remainder 
- If remainder 1 -> Parity odd of n 
- If remainder 0 -> Parity even of n 


#### Examples 

`
Let number  be === 101101

     
  | 1  | 0 | 1 | 1 | 0 | 1 | 
    2^5 2^4 2^3 2^2 2^1 2^0

Number ==> 1*2^5 + 0*2^4+ 1*2^3+ 1*2^2 +     
             0*2^1+ 1*2^0
          => 1*32 + 0*16 + 1*8 + 1*4 + 0*2 + 
            1*1   
          => 45


101(2) --> 1*2^ 2 + 0*2^ 1 + 1*2^ 0
      --> 4+0+1
      = 5

`
> In code - check in numberSystem.cpp

> Note - Od number always have 1 at its last in its binary form
// Have to do question here - Vodeo 5.1



#  Two's Complement
- Use to determined how a negative number store in the memeory


> Steps to find 2's complement
1. Convert in Binary Form
2. Prefix with 0
3. 1's Compliment (1 -> 0 ,  0 -> 1)
4. Add 1 

> Ex Number = 10
1. 1010
2. 01010
3. 10101
4. 10101 
     + 1
---------
   10110   == It represent a -ve number   
- ---------
- Because Most significant bit is 1
- That means -10 will be stored as 10110 in the memory

#
> If we want to find the decimal form of a -ve number then - > DO 2's completement

 Steps to find 2's complement of -ve number
1. 1's Compliment (1 -> 0 ,  0 -> 1)
2. Add 1 

> Ex Number = 10110
1. 01001
2. 01001 
     + 1
---------
   01010   == It represent a +ve number   
- ---------
- Because Most significant bit is 0
- That means 10 will be stored as 01010 in the memory


# Hex decimal Number System
Base Value =  10
Can be writtem in -> 0-15 [ 10 onwards A B C D E F] digits and power of 16

Ex ->
 4A5C(Base 16) -> 4*16 ^ 3 + 10*16 ^ 2 + 5*16 ^ 1
+ 12 *16 ^  0

