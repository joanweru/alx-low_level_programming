# 0x0E. C - Structures, typedef

This directory contains tasks for my `0x0E. C - Structures, typedef` project.

## Structures in C

C structure allows you to wrap related variables of different data types into a single variable. A structure can contain any valid data types such as `int`, `char`, `float`, `array`, `pointer` or even other structures. Each variable in the structure is called a **structure member**.

## Defining(creating) a structure

You can create a structure by using the keyword `struct` , followed by the name of the struct and declare each of its members inside curly braces:

```
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
};
```
## Creating a Struct Variable

```
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  strcpy(s1.myString, "Some text");

// a simpler syntax, to create a structure variable and assign values to it
  s1 = {13, 'B', "Some text"};

return 0;
}

```

## Pointer to a Structure in C 

We can have a pointer to structure, where a pointer variable can point to the address of a structure variable. Here is how we can declare a pointer to a structure variable. 

Here is how we can declare a pointer to a structure variable:

```
struct dog
{
 char name[10];
 char breed[10];
 int age;
 char color[10];
};

struct dog spike; //declare structure variable
struct dog *ptr_dog // declaring a pointer to a structure of type struct dog
ptr_dog = &spike; // assign the address of the variable spike to ptr_dog using & operator.
```
## Accessing Structure Memebers Using a Pointer

### Using indirection (∗) operator and dot (.) operator

```
(*ptr_dog).name // refers to the name of dog
 (*ptr_dog).breed // refers to the breed of dog
```

### Using arrow (−>) operator

```
ptr_dog −> name // refers to the name of dog
ptr_dog −> breed // refers to the breed of dog
```













