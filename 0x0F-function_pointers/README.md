# 0x0F. C - Function pointers

This directory contains tasks for my `0x0F. C - Function pointers` project.

## Function Pointers

A function pointer is a pointer pointing to the memory address of a function.

They can be used in a program to create a function call to functions pointed by them.

# Declaring Function Pointers

`function_return_type (*Pointer_name) (function argument list)`

example: 

```
#include<stdio.h>
int subtraction (int a, int b) {
   return a-b;
}
int main() {
   int (*fp) (int, int)=subtraction;
   //Calling function using function pointer
   int result = fp(5, 4);
   printf(" Using function pointer we get the result: %d",result);
   return 0;
}
```

## Calling a Function Through a Function Pointer in C

```
int (*pointer) (int); // function pointer declaration
int areaSquare (int); // function declaration

pointer = areaSquare; // a

int length = 5;

// Different ways to call the function

// 1. using function name
int area = areaSquare(length);

// 2. using function pointer (a)
int area = (*pointer)(length);

// 3. using function pointer (b)
int area = pointer(length);
```




