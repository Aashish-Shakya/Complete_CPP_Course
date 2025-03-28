# **Conditional Statements in C++**
Conditional statements, also known as **decision-making statements**   
Allow a program to make choices based on conditions.  
They help determine which block of code should be executed based on logical conditions.

### **Types of Conditional Statements:**
1. **if statement**  
2. **if...else statement**  
3. **if...else if ladder**  
4. **Nested if statement**  
5. **switch case statement**  

---

## **1. if Statement**
The `if` statement executes a block of code **only if the condition is true**.  

**Syntax:**
```cpp
if (condition) {
    // Code to execute if condition is true
}
```
**Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    if (num > 5) {  // Condition is true
        cout << "Number is greater than 5" << endl;
    }
    return 0;
}
```
**Output:**
```
Number is greater than 5
```

---

## **2. if...else Statement**
The `if...else` statement executes one block of code if the condition is **true** and another block if the condition is **false**.

**Syntax:**
```cpp
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```
**Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 3;
    if (num > 5) {
        cout << "Number is greater than 5" << endl;
    } else {
        cout << "Number is 5 or less" << endl;
    }
    return 0;
}
```
**Output:**
```
Number is 5 or less
```

---

## **3. if...else if Ladder**
The `if...else if` ladder is used when there are **multiple conditions** to check.

**Syntax:**
```cpp
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else if (condition3) {
    // Code for condition3
} else {
    // Code if none of the conditions are true
}
```
**Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 0;
    if (num > 0) {
        cout << "Positive number" << endl;
    } else if (num < 0) {
        cout << "Negative number" << endl;
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}
```
**Output:**
```
Zero
```

---

## **4. Nested if Statement**
A **nested if statement** is an `if` statement inside another `if` or `else` block.

**Syntax:**
```cpp
if (condition1) {
    if (condition2) {
        // Code for condition2
    } else {
        // Code if condition2 is false
    }
} else {
    // Code if condition1 is false
}
```
**Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    if (num > 5) {
        if (num % 2 == 0) {
            cout << "Number is even and greater than 5" << endl;
        } else {
            cout << "Number is odd and greater than 5" << endl;
        }
    } else {
        cout << "Number is 5 or less" << endl;
    }
    return 0;
}
```
**Output:**
```
Number is even and greater than 5
```

---

## **5. Switch Case Statement**
The `switch` statement evaluates an **expression** and executes the case **matching the value**.

**Syntax:**
```cpp
switch (expression) {
    case value1:
        // Code for case value1
        break;
    case value2:
        // Code for case value2
        break;
    case value3:
        // Code for case value3
        break;
    default:
        // Code if no case matches
}
```
- `break` prevents **fall-through**, stopping execution after a case is matched. or exit from the switch case
- `default` runs if **no case matches**.

**Example:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    return 0;
}
```
**Output:**
```
Wednesday
```

---

### **Key Takeaways**
- `if`: Executes when the condition is **true**.
- `if...else`: Chooses between **two options**.
- `if...else if`: Handles **multiple conditions**.
- `Nested if`: `if` inside another `if`.
- `switch case`: Efficient for **multiple fixed values**.
