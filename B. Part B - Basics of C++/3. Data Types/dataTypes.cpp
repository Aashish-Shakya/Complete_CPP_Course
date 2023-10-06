#include <iostream>
using namespace std;


struct DemoStruct {
  //vARIABLE DECLARATION
    int val1;
    double val2;

};

//Use to shorten the name
typedef struct DemoStruct dstruct;


class Demo {
    string name;

    public:
        Demo() {}
        Demo(string ip) : name(ip){}

        void printName(){
            cout <<" Name is: " << name << endl;
        }
    };

typedef Demo dem;


int main(){

//Primitive
//vARIABLE INITALIZATION
    int num = 10;
    int num2;
    int ch = 'a';
    short int si ;
    long int li;
    bool val = false;
    float dec = 11.11;
    double dec2 = 11.11;


// Derived
    int arr[10] = {1, 2, 3, 4, 5, 6 ,7};
    int *ptr = &num;
    int& numRef = num;


// User Defined
    enum day {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };

day d = Sunday;

cout << "Day is " <<d << endl;

//Creating a varialbe of te structure
    // struct DemoStruct s;
     
    dstruct s{0 , 1};
    cout << s.val2 << endl;

// Creating an object of the class
    // Demo demoObject("Devtown");
    dem demoObject("Devtown!");
    demoObject.printName();
 
  
}   