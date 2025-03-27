 #include <iostream>
using namespace std;

int main() {
    // Implicit Conversion
    char ch = 'B';
    int num = ch; // char → int (Implicit)

    cout << "Implicit Conversion (char to int): " << num << endl;  // Output: 66

    // Explicit Conversion
    float pi = 3.14159;
    int int_pi = (int)pi; // float → int (Explicit)

    cout << "Explicit Conversion (float to int): " << int_pi << endl;  // Output: 3

    return 0;
}
 