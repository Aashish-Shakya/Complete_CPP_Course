
> Program - Running Time And Space/Memory Occupied

<!-- ### Devtown - DSA -> Module 1 - Day 8- COmplexity - Not clear properly -->
ALgorithm Performance -> Directly related to Speed as well as correctness  == >  Efficency

# Complexity
The complexity of an algorithm is a function describing the efficiency of the algorithm, in term of the amount of data the alorithm must process.

## Time Complexity - 
The amount of time an algo takes /
Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input.

Example ->


1. 
```cpp
int n ;
cin >> n 
int a = 0;
for(int i = 1; i <= n ; i ++){
 a= a+1;
 
}
```
> Here Input is directly depended on loop/time -> Linear

2. 
```cpp
int n ;
cin >> n 
int a = 0;
for(int i = 1; i <= n ; i ++){

for(int i = 1; i <= n ; i ++){
 a= a+1;

}

}
```
> Here Input is n square times   -> Quadratic

## Space Complexity  
The amount of memory and algo take //
Space complexity of an algorithm quantifies the amount of time taken by a program to run as a function of length of the input. It is directly
proportional to the largest memory your program acquires at any instance during run time.


Example ->


1. 
```cpp
int n ;  // 4
cin >> n 
int a = 0; // 4
for(int i = 1; i <= n ; i ++){   // 4
 a= a+1;
 
}
```
> Here Input is Constant always use 12 bytes -> Constant


2. 
Consider an array 
arr[n] - n define size
Means space is dependednt on n directly -- Linear



# Why do we need Complexity analysis - an image attached
Becz Algo are platform dependednt means depends on lang used, hardware ...
So its not fare to judge the efficency of algo by just running and checking them


# Order of Growth
Image attached


#Asymptotic Analysis
Evaluating the performance of an algo in terms of input size

The time required by Na Algorithm falls under 3 typed


Best Case - Min Time req for program execution - Ω
Avg Case -  Avg Time req for program execution - θ
Worst Case -  Max Time req for program execution - O