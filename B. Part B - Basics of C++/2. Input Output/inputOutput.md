# **Input and Output (I/O) Operations**

In C++, all input and output operations are performed using **streams**. 
- A **stream** is simply a flow of bytes, either from an input device to the main memory or from the main memory to an output device.

## **1. Input Operations**
### **1.1 The `cin` Object**
- `cin` stands for **character input** and is used to take user input from the keyboard.
- It belongs to the **`istream` (input stream) class**.
- We use the **extraction operator (`>>`)** to take input.
- Bytes flow from device to main memory.


## **2. Output Operations**
### **2.1 The `cout` Object**
- `cout` stands for **character output** and is used to display output on the console.
- It belongs to the **`ostream` (output stream) class**.
- We use the **insertion operator (`<<`)** to send output to the console.
- Bytes flow from main memory to device.



### 💡**Example**
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}
```
📌 **Note:** `cin` only takes input until the first whitespace. It does not work well for multi-word strings.

---

### **1.2 Using `getline()` for String Input**
If we need to take a full sentence as input, `getline()` is used.  
Unlike `cin`, `getline()` reads the entire line (including spaces).

### **Example**
```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);  // Takes full line input
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
```

---

## **3. Error Streams (`cerr` and `clog`)**
Sometimes, we need to display error messages. C++ provides two types of error streams:

### **3.1 `cerr` (Unbuffered Standard Error Stream)**
- Used for **immediate** error messages.
- It does not use buffering, so errors are displayed as soon as they occur.


---

### **3.2 `clog` (Buffered Standard Error Stream)**
- Unlike `cerr`, `clog` **buffers** the error messages before displaying them.
- This means it might wait to output errors until enough data has accumulated.

### 💡 **Example**
```cpp
#include <iostream>
using namespace std;

int main() {
    cerr << "Error: Invalid input!" << endl;
    clog << "Warning: This is a buffered error message." << endl;
    return 0;
}
```

---

## **4. C++ Header Files for I/O**
C++ provides three main header files for handling input and output operations:

| Header File  | Purpose |
|-------------|---------|
| `#include <iostream>` | Standard I/O (`cin`, `cout`, `cerr`, `clog`) |
| `#include <iomanip>` | I/O Manipulators (e.g., `setw`, `setprecision`) |
| `#include <fstream>` | File handling (`ifstream`, `ofstream`, `fstream`) |

---

## **5. Input and Output Buffering**
A **buffer** is a temporary memory storage used for storing data before processing.  

### **Example of Buffered Input Issue**
If you enter a **number** first and then a **string**, `cin` might leave a newline character (`\n`) in the buffer, which can cause `getline()` to behave incorrectly.

### **Example Problem**
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;  // Takes an integer input

    cout << "Enter your full name: ";
    getline(cin, name);  // This might not work as expected!

    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}
```
🚨 **Problem:** `getline(cin, name);` might get skipped because `cin` leaves a **newline character (`\n`)** in the buffer.

### **Solution: Use `cin.ignore()`**
```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();  // Discard the leftover newline character

    cout << "Enter your full name: ";
    getline(cin, name);  // Now it works correctly!

    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}
```

---

## **6. Summary**
✅ `cin >> var;` → Takes user input but stops at spaces.  
✅ `getline(cin, var);` → Takes full-line input, including spaces.  
✅ `cout << var;` → Prints output on the console.  
✅ `cerr << "error";` → Displays unbuffered error messages.  
✅ `clog << "error";` → Displays buffered error messages.  
✅ `cin.ignore();` → Used to clear unwanted characters from input buffer.  

>📝 We will learn more about getline() fn in Strings chapter

