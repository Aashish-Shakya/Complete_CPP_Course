## **1. What are Data Types?**  
A **data type** in C++ defines:  
- **The type of data** a variable can store.  
- **The amount of memory** required to store that data.  
- **The operations** that can be performed on that data.  

### **Categories of Data Types**  
C++ data types are broadly classified into three categories:  
1. **Primitive Data Types** (Built-in)  
2. **Derived Data Types** (Built upon primitive types)  
3. **User-Defined Data Types** (Created by the user)  

---

## **2. Primitive Data Types (Built-in)**  
Primitive types are predefined in C++ and are the most basic data types.  

### **A. Integer (int)**  
- Used to store **whole numbers** (positive, negative, or zero).  
- Requires **4 bytes** of memory.  
- **Signed int** (default): Range → `-2^31 to 2^31 - 1`  
- **Unsigned int**: Range → `0 to 2^32 - 1`  
- Variants:  
  - `short int` → 2 bytes  
  - `long int` → 8 bytes  

### **B. Character (char)**  
- Used to store a **single character** (e.g., 'A', 'B', '1', '#').  
- Requires **1 byte** of memory.  
- **Signed char**: Range → `-128 to 127`  
- **Unsigned char**: Range → `0 to 255`  

### **C. Boolean (bool)**  
- Stores only **true (1) or false (0)**.  
- Requires **1 byte** of memory.  

### **D. Floating Point (float & double)**  
- Stores **decimal numbers (floating-point values)**.  
- `float`: Requires **4 bytes**, precision up to **7 digits**.  
- `double`: Requires **8 bytes**, precision up to **15 digits**.  
- Used for calculations that require precision (scientific, engineering).  

### **E. Void (void)**  
- Represents **“nothing” or “no value”**.  
- Used in functions that **do not return a value**.  

``

---

> 📝 We will study the rest of them later 
---
`` 
## **3. Derived Data Types**  
Derived types are extensions of primitive types that help store **multiple values or memory addresses**.  

### **A. Arrays**  
- Collection of **homogeneous data elements** stored **contiguously** in memory.  
- Example:  
  ```cpp
  int numbers[5] = {10, 20, 30, 40, 50};
  ```
  
### **B. Pointers**  
- Stores the **memory address** of another variable.  
- Example:  
  ```cpp
  int x = 10;
  int *ptr = &x;  // Pointer stores the address of x
  ```
  
### **C. References**  
- An **alternative name** for an existing variable.  
- Example:  
  ```cpp
  int a = 10;
  int &b = a;  // 'b' is a reference to 'a'
  ```

---

## **4. User-Defined Data Types**  
These allow programmers to create their own **custom** data structures.  

### **A. Structures (struct)**  
- Groups **different types of variables** together.  
- Example:  
  ```cpp
  struct Person {
      string name;
      int age;
  };
  ```

### **B. Classes (OOP concept)**  
- Used in **Object-Oriented Programming (OOP)**.  
- Defines **attributes (variables) and behaviors (functions)**.  

### **C. Unions (union)**  
- Similar to a **struct**, but **shares memory** among its members.  

### **D. Enumerations (enum)**  
- Defines a **set of named integer constants**.  
- Example:  
  ```cpp
  enum Color { RED, GREEN, BLUE };
  Color myColor = RED;
  ```

### **E. Typedef & using (aliasing types)**  
- Used to give **custom names** to existing data types.  
- Example:  
  ```cpp
  typedef unsigned int uint;
  uint age = 25;
  ```

---

## **5. Data Type Modifiers**  
Modifiers change the **size** or **sign** of primitive data types.  

| Modifier    | Used With | Effect |
|------------|----------|--------|
| `signed`   | int, char | Allows negative and positive values (default). |
| `unsigned` | int, char | Allows only **positive values** (doubles max range). |
| `short`    | int      | Reduces memory size (2 bytes). |
| `long`     | int, double | Increases memory size (8 bytes for int, double). |

Example:  
```cpp
unsigned int positiveValue = 300;
long int bigNumber = 100000;
```

---

## **6. Memory Sizes of Data Types**  
| Data Type | Size (in Bytes) | Range |
|-----------|---------------|-------|
| `char` | 1 | -128 to 127 |
| `unsigned char` | 1 | 0 to 255 |
| `int` | 4 | -2,147,483,648 to 2,147,483,647 |
| `unsigned int` | 4 | 0 to 4,294,967,295 |
| `short int` | 2 | -32,768 to 32,767 |
| `long int` | 8 | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `float` | 4 | Up to 7 decimal places |
| `double` | 8 | Up to 15 decimal places |
| `bool` | 1 | true (1) or false (0) |

---

## **7. Example Program (Using All Topics)**  
```cpp
#include <iostream>
using namespace std;

// Defining a structure (User-Defined Data Type)
struct Student {
    string name;
    int age;
};

// Global variable (Scope Example)
int globalVar = 50;

int main() {
    // Primitive Data Types
    int num = 10;       // Integer
    float pi = 3.14;    // Floating point
    char grade = 'A';   // Character
    bool isPass = true; // Boolean
    
    // Scope of Variable
    int localVar = 20;  // Local variable (higher precedence)
    
    // Using Derived Data Types
    int marks[] = {90, 85, 78};  // Array
    int *ptr = &num;             // Pointer
    
    // Using Structure
    Student student1;
    student1.name = "John";
    student1.age = 20;
    
    // Output
    cout << "Integer: " << num << endl;
    cout << "Float: " << pi << endl;
    cout << "Char: " << grade << endl;
    cout << "Boolean: " << isPass << endl;
    cout << "Array Element: " << marks[0] << endl;
    cout << "Pointer Value: " << *ptr << endl;
    cout << "Student Name: " << student1.name << ", Age: " << student1.age << endl;
    
    return 0;
}
```
---

## **Conclusion**  
- **Primitive Data Types**: Basic built-in types like `int`, `float`, `char`, `bool`.  
- **Derived Data Types**: Based on primitive types (`array`, `pointer`, `reference`).  
- **User-Defined Data Types**: Custom data types (`struct`, `class`, `enum`).  
- **Modifiers**: Change size or sign (`signed`, `unsigned`, `long`, `short`).  
 