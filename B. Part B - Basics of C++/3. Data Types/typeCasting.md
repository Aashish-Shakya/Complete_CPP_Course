 ## **What is Type Casting?**  
Type casting means **converting a variable from one data type to another**.  

### **Why is Type Casting Needed?**  
- To perform **operations between different data types** (e.g., `int + float`).  
- To **avoid data loss** while converting between types.  
- To **ensure compatibility** when passing values to functions.  

---

## **Types of Type Casting in C++**  
There are **two types** of type casting:  

### **1. Implicit Type Conversion (Automatic)**  
- Done **automatically by the compiler**.  
- Happens when **converting from a smaller to a larger data type**.  
- No data loss occurs.  

#### **Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    char a = 'A';  // 'A' has an ASCII value of 65
    int b = a;     // Implicit conversion from char to int

    cout << "Value of b: " << b << endl; // Output: 65
    return 0;
}
```
**Explanation:**  
- `'A'` (char) has an **ASCII value** of `65`.  
- The compiler automatically **converts** it to an `int` without data loss.  

#### **More Implicit Conversions:**  
```cpp
int x = 10;
float y = x;  // Implicit conversion from int to float
```

---

### **2. Explicit Type Casting (Manual)**  
- Done **manually by the programmer**.  
- Requires using **type casting syntax**.  
- Can cause **data loss** (e.g., converting `float → int`).  

#### **Syntax:**  
```cpp
(dataType) value
```

#### **Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    float a = 100.99;
    int b = (int)a;  // Explicit type casting

    cout << "Value of b: " << b << endl; // Output: 100
    return 0;
}
```
**Explanation:**  
- `a` is a **float (100.99)**.  
- `(int)a` **forces** conversion to an `int`, removing the decimal part.  
- **Data loss** occurs (`0.99` is lost).  

#### **More Explicit Conversions:**  
```cpp
double d = 9.7;
int i = int(d);   // Same as (int)d
float f = (float)i;
```

---

## **Comparison Table: Implicit vs Explicit Casting**  

| Feature          | Implicit Casting | Explicit Casting |
|-----------------|----------------|----------------|
| **Who does it?** | Compiler       | Programmer |
| **Syntax**       | Automatic      | `(dataType)value` |
| **Risk of Data Loss** | No (Safe) | Yes (Possible) |
| **Example**      | `int x = 'A';` | `int y = (int)3.14;` |


---

## **Conclusion**  
- **Implicit Casting:** Automatic, safe, no data loss.  
- **Explicit Casting:** Manual, may cause data loss, used when needed.  
