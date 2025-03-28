# **Number System**

## **What is a Number System?**
A **number system** is a way to represent numbers using a specific set of digits and a base (or radix).     
The base determines how many unique digits the system uses.

For example:
- **Decimal system (Base 10):** Uses 10 digits → {0,1,2,3,4,5,6,7,8,9}
- **Binary system (Base 2):** Uses 2 digits → {0,1}

Computers use the **Binary Number System** because they operate with electrical signals, which can either be **ON (1)** or **OFF (0)**.

---

## **Types of Number Systems**
| **Number System** | **Base** | **Digits Used** |
|------------------|---------|----------------|
| **Decimal** | 10 | {0,1,2,3,4,5,6,7,8,9} |
| **Binary** | 2 | {0,1} |
| **Octal** | 8 | {0,1,2,3,4,5,6,7} |
| **Hexadecimal** | 16 | {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F} |

---

## **Understanding Number Systems**

### **1. Decimal Number System (Base 10)**

- The most common number system we use in daily life.  
- Each digit's position represents a power of **10**.


Example: **1234 (Base 10)**  
```
1234 = 1 × 10³ + 2 × 10² + 3 × 10¹ + 4 × 10⁰
     = 1000 + 200 + 30 + 4
     = 1234
```

---

### **2. Binary Number System (Base 2)**

- Used by computers because they only understand 0s and 1s.
- Each digit represents a power of **2**.

Example: **45 (Base 10) → 101101(Base2)**  
```
45 = 1 × 2⁵ + 0 × 2⁴ + 1 × 2³ + 1 × 2² + 0 × 2¹ + 1 × 2⁰
   = 101101 (Base 2)
```

---

## **Conversions Between Number Systems**

### **1. Decimal to Binary Conversion**
Steps:
1. Divide the number by **2**.
2. Write down the remainder.
3. Repeat until you reach **0**.
4. Read the remainders in **reverse order**.

Example: Convert **14 (Base 10) → Binary**  
```
Quotient | Remainder
---------|----------
14 ÷ 2 = 7 | 0
7 ÷ 2 = 3  | 1
3 ÷ 2 = 1  | 1
1 ÷ 2 = 0  | 1
```
Binary Representation: **1110 (Base 2)**

---

### **2. Binary to Decimal Conversion**
Steps:
1. Multiply each bit by **2 raised to its position**.
2. Sum the results.

Example: Convert **101 (Base 2) → Decimal**  
```
= 1 × 2² + 0 × 2¹ + 1 × 2⁰ = 4 + 0 + 1 = 5 (Base 10)
= =4+0+1=5(Base10)
= 10
```
Decimal Representation: **10 (Base 10)**

---

### Parity Digit 

- Parity Digit of a number n refers to the remainder it gives when divided by 2. 
- Parity Digit => n/2 => remainder 
- If remainder 1 -> Parity odd of n 
- If remainder 0 -> Parity even of n 


#### Examples 
```
Let number  be === 101101

Number =>  1 × 2⁵ + 0 × 2⁴ + 1 × 2³ + 1 × 2² + 0 × 2¹ + 1 × 2⁰
      = 45 (Base 10)


101(2) = 1 × 2² + 0 × 2¹ + 1 × 2⁰
       = 4+0+1
       = 5

```
> Note - Odd number always have 1 at its last in its binary form
// Have to do question here - Vodeo 5.1



### **3. Two’s Complement**
Computers use **Two’s Complement** to store negative numbers.
- Use to determined how a negative number store in the memeory

**One’s Complement**-> Invert all the bits (**1 → 0, 0 → 1**) 


Steps:
1. Convert the number to **binary**.
2. Prefix with 0
3. **One’s Complement**.(**1 → 0, 0 → 1**) 
4. Add **1** to the result.

Example: Find **Two’s Complement of 10**  
```
10 in binary → 1010
Prefix with 0 → 01010
One’s Complement → 10101
Add 1 → 10101 + 0001 = 0110
Result → 10110 (Represents -10 in memory)

- It represent a -ve number Because Most significant bit is 1
- That means -10 will be stored as 10110 in the memory

```


# Reverse of 2's complemet
- If we want to find the decimal form of a -ve number

 Steps :
1. 1's Compliment (1 -> 0 ,  0 -> 1)
2. Add 1 
3. Remove suffix 0

Example: Find **Two’s Complement of 10110**  
```
1's Compliment 10110 →  01001
Add 1  → 01010
Result → 1010 (Represents 10 in memory)

- Its +ve Because Most significant bit is 0
- That means 10 will be stored as 01010 in the memory

```
---

### **4. Hexadecimal Number System (Base 16)**
Uses **16 digits**: {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F}

Example: Convert **4A5C (Base 16) → Decimal**  
```
= 4 × 16³ + 10 × 16² + 5 × 16¹ + 12 × 16⁰
= 4 × 4096 + 10 × 256 + 5 × 16 + 12 × 1
= 16384 + 2560 + 80 + 12
= 19036 (Base 10)
```

---

## **Summary**
- **Decimal (Base 10)**: Used in everyday life.
- **Binary (Base 2)**: Used by computers.
- **Octal (Base 8)**: Shortcut for representing binary.
- **Hexadecimal (Base 16)**: Used in memory addressing and color codes.


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

