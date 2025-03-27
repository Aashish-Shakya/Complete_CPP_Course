### **Reference Variable in C++**
A **reference variable** is an alias (another name) for an existing variable.
- It allows us to refer to the same memory location using a different name. 
- Any modification done through the reference affects the original variable and vice versa.

---

## **1. Declaring a Reference Variable**
A reference variable is declared using the `&` symbol:
```cpp
int a = 10;
int &ref = a; // ref is a reference to a
```
Now, both `a` and `ref` point to the same memory location.

### **Key Properties:**
✅ A reference must be initialized when declared.  
✅ Once initialized, a reference cannot be changed to refer to another variable.  
✅ It does not consume extra memory, as it is just an alias.  

---

## **2. Example Demonstration**

### **Case 1: Reference and Normal Variable**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int &ref = a; // ref is a reference to a

    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    ref = 10; // Changing ref will also change a
    cout << "After modifying ref:" << endl;
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    return 0;
}
```
🔹 Output:
```
a: 5
ref: 5
After modifying ref:
a: 10
ref: 10
```
✅ Both `a` and `ref` store the same value, and modifying `ref` also changes `a`. 

---

## **4. Comparison: Normal Variable vs Reference**
| **Feature** | **Normal Variable** | **Reference Variable** |
|------------|------------------|----------------------|
| Memory Allocation | New memory assigned | Uses existing memory |
| Requires Initialization? | No | Yes (must be initialized at declaration) |
| Can be changed to another variable? | Yes | No |
| Passed to function by default | Passed by value | Passed by reference |

---

## **Conclusion**
- A **reference** is just another name for a variable.
- Any modification done through the reference affects the original variable and vice versa.

