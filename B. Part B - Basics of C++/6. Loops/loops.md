# **Loops in Programming**
Loops allow us to execute a block of code multiple times based on a condition.    
Instead of writing repetitive code, loops help in automating tasks efficiently.

## **Types of Loops**
1. **For Loop**  
2. **While Loop**  
3. **Do-While Loop**  
4. **For-Each Loop**  - will discus this later on
5. **Nested Loops**  

---

### **1. For Loop**
The `for` loop is used when the number of iterations is known beforehand.

#### **Syntax:**
```cpp
for(initialization; condition; update) {
    // Code block to execute
}
```

#### **Working:**
1. **Initialization** – A variable is initialized (executed only once).
2. **Condition** – The loop executes while this condition is `true`.
3. **Update** – The loop variable is updated after each iteration.

#### **Example:**
```cpp
for(int i = 1; i <= 5; i++) {
    cout << i << " ";  // Output: 1 2 3 4 5
}
```

#### **Variations of `for` Loop:**
1. **Omitting Initialization:**
   ```cpp
   int i = 1;
   for(; i <= 5; i++) {
       cout << i << " ";
   }
   ```
2. **Omitting Condition (Infinite Loop):**
   ```cpp
   for(int i = 1; ; i++) {
       if(i > 5) break;
       cout << i << " ";
   }
   ```
3. **Omitting Update Statement:**
   ```cpp
   for(int i = 1; i <= 5; ) {
       cout << i << " ";
       i++;  // Update inside the loop
   }
   ```
4. **Omitting Everything (Infinite Loop):**
   ```cpp
   for(;;) {
       cout << "Hello";  // Runs forever
   }
   ```

---

### **2. While Loop**
The `while` loop executes a block of code **as long as the condition is `true`**.

#### **Syntax:**
```cpp
while(condition) {
    // Code block
}
```

#### **Example:**
```cpp
int i = 1;
while(i <= 5) {
    cout << i << " ";    //// Output: 1 2 3 4 5
    i++;
}
```

---

### **3. Do-While Loop**
The `do-while` loop **executes at least once**, regardless of the condition.

#### **Syntax:**
```cpp
do {
    // Code block
} while(condition);
```

#### **Example:**
```cpp
int i = 1;
do {
    cout << i << " ";  // Output: 1 
    i++;
} while(i >= 5);
```

---

### **4. For-Each Loop (Used for Arrays & Collections)**
This loop is useful for iterating over an array without using an index.

#### **Syntax:**
```cpp
for(datatype variable : array) {
    // Code block
}
```

#### **Example:**
```cpp
int arr[] = {1, 2, 3, 4, 5};
for(int num : arr) {
    cout << num << " ";
}
```

---

### **5. Nested Loops**
A loop inside another loop is called a **nested loop**.

#### **Example:**
```cpp
for(int i = 1; i <= 3; i++) {
    for(int j = 1; j <= 3; j++) {
        cout << i << "," << j << "  ";
    }
}
```
**Output:**
```
1,1  1,2  1,3  
2,1  2,2  2,3  
3,1  3,2  3,3
```

---

### **Loop Control Statements**
These are special statements to alter the flow of loops:

1. **`break` Statement:**  
   - **Used to exit the loop immediately.**
   - Example:
     ```cpp
     for(int i = 1; i <= 5; i++) {
         if(i == 3) break;
         cout << i << " ";
     }
     ```
     **Output:** `1 2`

2. **`continue` Statement:**  
   - **Skips the current iteration and moves to the next one.**
   - Example:
     ```cpp
     for(int i = 1; i <= 5; i++) {
         if(i == 3) continue;
         cout << i << " ";
     }
     ```
     **Output:** `1 2 4 5`

3. **`goto` Statement:**  
   - **Transfers control to a labeled statement.** *(Avoid using it in modern programming.)*
   - Example:
     ```cpp
     int i = 1;
     start:
     cout << i << " ";
     i++;
     if(i <= 5) goto start;
     ```

---

### **Conclusion**
Loops are a fundamental concept in programming that help in reducing redundancy and automating repetitive tasks. Choosing the right loop depends on the use case:
- Use `for` when you know the number of iterations.
- Use `while` when the loop should run until a condition is met.
- Use `do-while` if you need to execute the loop at least once.
- Use `for-each` for arrays and collections.
- Use `nested loops` for multi-dimensional tasks.