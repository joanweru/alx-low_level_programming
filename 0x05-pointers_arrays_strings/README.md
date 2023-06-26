# 0x05-pointers_arrays_strings

This directory contains tasks for my `0x05-pointers_arrays_strings` project.

## Memory address 

When variable is created in C, a memory address is assigned to the variable. **The memory address** is the location of where the variable is stored on the computer.

 **To access it, use the reference operator** `&`

 e.g for var `myAge`

`&myAge)`

## Pointer

 **A pointer** is a variable that **stores the memory address** of another variable as its value.

**It is created with the** `*` **operator.**

*NB: The pointer and the variable whose memory adress it is storing have to be of the same data type*

`int* p = &myAge;`

`printf("%p\n", p);`

Now, `p` holds the value of myAge's memory address.

## Deference 

You can also get the value of the variable the pointer points to, by using the `*` operator **(the dereference operator)**. 


`int myAge = 43;`     *// Variable declaration*

`int* p = &myAge;`  *// Pointer declaration* 

*Reference: Output the memory address of myAge with the pointer* 

`printf("%p\n", p);`

*Dereference: Output the value of myAge with the pointer* 

`printf("%d\n", *p);`




