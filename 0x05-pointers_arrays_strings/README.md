# 0x05-pointers_arrays_strings

This directory contains tasks for my `0x05-pointers_arrays_strings` project.

## Memory address 

When variable is created in C, a memory address is assigned to the variable. **The memory address** is the location of where the variable is stored on the computer.

 **To access it, use the reference operator** `&`

 e.g for var `myAge`

`&myAge`

## Pointer

 **A pointer** is a variable that **stores the memory address** of another variable as its value.

**It is created with the** `*` **operator.**

*NB: The pointer and the variable whose memory adress it is storing have to be of the same data type*

`int *ptr = &myAge;`

`printf("%p\n", ptr);`

Now, `ptr` holds the value of myAge's memory address.

### <ins> Deference </ins>

You can also get the value of the variable the pointer points to, by using the `*` operator **(the dereference operator)**. 

`int myAge = 43;`     *// Variable declaration*

`int *ptr = &myAge;`  *// Pointer declaration* 

*Reference: Output the memory address of myAge with the pointer* 

`printf("%p\n", ptr);`

*Dereference: Output the value of myAge with the pointer* 

`printf("%d\n", *ptr);`

## Array 

An array is a collection of variables of the same type.

### <ins> Declaring(Creating) Arrays </ins>

To create an array, define the data type and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list, inside curly braces:

`int myNumbers[] = {25, 50, 75, 100};`

or specify the size of the array, and add elements later:

```
// Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
```

### <ins> Accessing Array Elements </ins>

An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array

This statement accesses the value of the first element in `myNumbers`:

```
int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]);
```

**NB: Array indexes start with 0**

## Relationship between pointers and arrays

Arrays and pointers can be used interchangeably in C.

In C, when you declare an array, the array name itself can be treated as a pointer. It automatically points to the memory address of the first element of the array. So, you can use the array name as a pointer to access or modify the elements in the array.

For example, consider the following code snippet: 

```
int numbers[5] = {1, 2, 3, 4, 5}; 
int *ptr = numbers;
```
In this case, both `numbers` and `ptr` point to the same memory location, which is the first element of the numbers array. Therefore `ptr[0]` is the same as `numbers[0]`. 







