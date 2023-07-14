# 0x02. C - Functions, nested loops

## Functions

A function is a group of statements that together  perform certain actions. They are important for reusing code: Define the code once, and use it many times. 

## Function Definition

A function definition provides the actual body of the function.

```
return_type function_name( parameter list ) {
   body of the function
}
```

* **Return Type** - is the data type of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return type is the keyword `void`
* **Function Name** − the actual name of the function
* **Parameter List** -  refers to the type, order, and number of the parameters of a function
* **Function Body** − contains a collection of statements that define what the function does

## Function Declarations

A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately. 

```
return_type function_name( parameter list );
```

Function declaration is required when you define a function in one source file and you call that function in another file. In such case, you should declare the function at the top of the file calling the function.

### Prototype

In C programming, a prototype refers to a declaration that provides information about a function before its actual implementation.

Prototypes are typically placed at the beginning of a program or in header files to allow other parts of the program to use the function without needing to know the implementation details

## Calling a Function

While creating a C function, you give a definition of what the function has to do. To use a function, you will have to call that function to perform the defined task.

A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program. 

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.

## Header File

Header files in C are files that contain function prototypes, type definitions, and constant declarations. By including the header file, you make the function prototypes available to your code, allowing you to call those functions without having to define them again in every source file. 

To use a header file in C, you can include it in your source code using the `#include` preprocessor directive.

 **NB: When using the   `#include` directive, you can either use angle brackets `< >` for system headers or double quotes `" "` for your own header files or files located in the same directory as your source code.** 

> In summary: 

```
// Function declaration - header function
void myFunction();

// The main method; call the function - main.c file
int main() {
  myFunction();  
  return 0;
}

// Function definition - source file
void myFunction() {
  printf("I just got executed!");
}
```

## Scope of Variables

The **scope of a variable** in C is the block or the region in the program where a variable is declared, defined, and used. Outside this region, we cannot access the variable and it is treated as an undeclared identifier. 

There are three places where variables can be declared in C programming language:

* The **Local Scope/Block Scope** refers to the region inside a block or a function. It is the space enclosed between the `{ }` braces. 
* The **Global Scope/File Scope** refers to the region outside any block or function. It starts at the beginning of the file and ends at the end of the file.
* In the definition of function parameters which are called **Formal Parameters**.

## Types of variables

* **Local Variables** - variables declared within the local scope. The scope and lifetime of these variables remain limited to the block in which they are declared. They have internal linkage 
* **Global Variables** - variables declared in the global scope. They are visible in every part of the program. They have an external linkage

## Project Tasks

The following are programs in this directory and their uses:

* `0-putchar.c` - prints _putchar, followed by a new line.
    * The program should return 0
    
* `1-alphabet.c` - prints the alphabet, in lowercase, followed by a new line.
    * Prototype: `void print_alphabet(void);`
    * You can only use `_putchar` twice in your code
 
* `2-print_alphabet_x10.c` - prints 10 times the alphabet, in lowercase, followed by a new line.
    * Prototype: `void print_alphabet_x10(void);`
    * You can only use `_putchar` twice in your code
 
* `3-islower.c` - checks for lowercase character.
    * Prototype: `int _islower(int c);`
    * Returns `1` if `c` is lowercase
    * Returns 0 otherwise\
 
 *  `4-isalpha.c` - checks for alphabetic character.
    * Prototype: `int _isalpha(int c);`
    * Returns `1` if `c` is a letter, lowercase or uppercase
    * Returns `0` otherwise
  
* `5-sign.c` -  prints the sign of a number.

   * Prototype: int print_sign(int n);
   * Returns `1` and prints `+` if `n` is greater than zero
   * Returns `0` and prints `0` if `n` is zero
   * Returns `-1` and prints `-` if `n` is less than zero
 
* `6-abs.c` - computes the absolute value of an integer.
   * Prototype: `int _abs(int);`

* `7-print_last_digit.c` - prints the last digit of a number.
  * Prototype: `int print_last_digit(int);`
  * Returns the value of the last digit
 
* `8-24_hours.c` - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
   * Prototype: void jack_bauer(void);
   
* `9-times_table.c` prints the 9 times table, starting with 0.
   * Prototype: `void times_table(void);`

* `10-add.c` - adds two integers and returns the result.
   * Prototype: `int add(int, int);`
 
* `11-print_to_98.c` - prints all natural numbers from n to 98, followed by a new line.
   * Prototype: `void print_to_98(int n);`
   * Numbers must be separated by a comma, followed by a space
   * Numbers should be printed in order
   * The first printed number should be the number passed to your function
   * The last printed number should be `98`
   * You are allowed to use the standard library
 
* `100-times_table.c` - prints the n times table, starting with 0.
   * Prototype: `void print_times_table(int n);`
   * If `n` is greater than 15 or less than 0 the function should not print anything

* `101-natural.c` - prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

*  `102-fibonacci.c` - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
   * The numbers must be separated by comma, followed by a space `, ` 

* `103-fibonacci.c` - finds and prints the sum of the even-valued terms, followed by a new line.

* `104-fibonacci.c` -  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
  * The numbers should be separated by comma, followed by a space `, `
  * You are allowed to use the standard library
  * You are not allowed to use any other library (You can’t use `GMP` etc…)
  * You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
  * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
         
