
/*
# Function 

--> Are block of code that are designed to perform a specific task. 

INp >>>>   BOX   -->  O/p [type]  

> **Note** - Is to promote modularity and Reusability of code   


### Why are Fn important in c++ ? 

* Increase reusability of code
* DRY principle -> Don't repeat yourself
* Easy to read and understand.


> SYNTAX -> 

returnType functionName(dataType parameter1, datatype parameter2, ....){
    // function body

    return value;
}




# Keywords 

1. Function names 

* It is the unique name of that function. 
* It is always recommended to declare a function before it is used. 

2. Return Type 

* The return type of a function is the data type of the variable that that function
returns. 
* The return value is store in the function after the execution of the code present in it 

3. Parameters  
- Parameters actually act as variables inside the Function. They are specified after the Function name, inside the parentheses. You can add as many parameters as you want, simply separate them with commas.
- A function can take some parameters as inputs. These parameters are specified
along with their data types. 
- This will allow to make fn with same name but different types or numbers of parameters 
- --> Parameter allows as to create multiple function with same name but differnet number of parameter 

    - **Formal Parameter**
    passed when funtion is created/defination 

    - **Actual Parameter/ Arguments**  
    passed when we are calling fn 

    
**Default Parameter Value** 
- It is a value in the fn declaration automatically assigned by the compiler if the calling fn does not pass any value to that argument.
- It auto assign value if nothing is passed while calling 


> ex - int add( int a= 0, int b = 0); --> Prototype
`
int add(inta, int b=1, int c=2){
    return (a+b+c);


}
int main(){
    cout<< add(2)<<endl; O/P -- 5
    cout<< add(2,2)<<endl; O/P -- 6
    cout<< add(2,2,3)<<endl; O/P -- 7
}

`


4. Function Body 
- It is a part of the Function declaration that contains the code for all the actions to be
performed. It is enclosed within a pair of curly braces.


# Function in Memory 

According to c++ we have two types of memory  
1. Stack - Static allocation 
2. Heap - Dynmic allocation 

All function are stored as Stack in memory in form of stack frame 

> Pushed or Poped from Top - [Work as Book Stack ]


# Types of Fn

1. User-Defined Fn

- SYNTAX -> 

`
returnType functionName(parameter1, parameter2, ....){
    // function body
    return value;
} 
`

2. Standard Libarary Fn
- These are the built-in functions that are readily available for use. 

    1. pow(a,b) - present in cmath header file
    2. sqrt(a) - present in cmath header file




# Calling a Function 

To call you have to write the fn name followed by (); and always declare fn above main. 


> **Note** --> We can't store a viod fn in any variable


# Function Prototype

If we want to define a function after the function call, We need to use the  fn prototype. 

- ex -
type add(paramemeter 1, ...); --> Prototype
`
int main(){
    defination of add fn
}
`


 
# Pass By Value 
- the function parameter values (i.e. value from actual parameter) are copied to another
variable (formal parameter). 
- This is also known as 'call by value'. 
- Primitive Data types are always passed as pass by value

`
voide changeValue(int z){
    z=100; // Formal Parameetr
}
int main(){
    int a=5;
    changeValue(a);  // Actual Parameter
    cout << a;
}

`

> // The output of this code in 5
It is not printing 100 bcz here copies are created so both a and z are different


# Pass By reference  - we learn this later in pointer chapter 
- actual copy of variable reference is passed to the function. 
- This is also known as ‘call by reference’.
- Parameter values are passed itself
Using Ampersand (&) Operator

`
int p = 5;
int &q =p; 
//Both variable refer to same memeory location.
& - operator create alias name of a variable memory location
----------------------------
voide changeValue(int &z){
    z=100; // Formal Parameetr
}
int main(){
    int a=5;
    changeValue(a);  // Actual Parameter
    cout << a;
}

// The output of this code in 100
Bcz here we are creating alias for same memory location a

`

