/*
DECIMAL NUMBER SYSTEM - BASE 10

LET NUMBER BE 1234

  1000  100  10   1
  | 1  | 2  | 3 | 4 |
  10^3 10^2 10^1 10^0

  REPRESENTATION OF 1234 IN DECIAMLA NUMBER SYSTEM
  1234 =  1*1000 + 2*100 + 2*10 + 4*1
  1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0



BINARY NUMBER SYSTEM - BASE 2

LET NUMBER BE 45

    32   16   8  4  2  1
  | 1  | 0 | 1 | 1 | 0 | 1 | 
    2^5 2^4 2^3 2^2 2^1 2^0

  45 = 1*32 + 0*16 + 1*8 + 1*4 + 0*2 + 1*1 
  45 = 1*2^5 + 0*2^4+ 1*2^3+ 1*2^2= 0*2^1+ 1*2^0



 

How to find digit of number --> we divide   number  by 10 and note the remainder in each step


            Interger only           Digits
    N       (Quotient)N/10     (Remainder)N%10

    1234         123                4

    123           12                3

    12             1                2

    1              0                1

Check remainder in reverse order we will get  the number. 







CONVERSION FROM 10 --> 2

How to find digit of number --> we divide   number  by 10 and note the remainder in each step


            Interger only           Digits
    N       (Quotient)N/2     (Remainder)N%2

    45           22              1

    22           11              0
    
    11            5              1

    5             2              1

    2             1              0

    1             0              1

Check remainder in reverse order we will get  the number in binary.

45 ==> 101101




CONVERSION FROM 2 --> 10

Let number  be === 101101

     
  | 1  | 0 | 1 | 1 | 0 | 1 | 
    2^5 2^4 2^3 2^2 2^1 2^0

Number is==> 1*2^5 + 0*2^4+ 1*2^3+ 1*2^2= 0*2^1+ 1*2^0

         ==> 1*32 + 0*16 + 1*8 + 1*4 + 0*2 + 1*1   
        ==> 45
*/

// Have to do question here - Vodeo 5.1