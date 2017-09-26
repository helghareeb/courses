# بسم الله الرحمن الرحيم

## C Programming Language

## Part One

## The C Language
- Created by Dennis Ritchie at Bell Labs in 1972
- Based on Ken Thomson's B language
- C was designed as a practical tool and not necessarily academic (like Pascal) or simple (like Basic)
- Not really a high level languages, it is sort of hybrid programming language
- Does not Implement object oriented programming

## The C11 Standard
- If you never programmed in C, the changes from earlier standards are of minor importance
- The most significant changes are in advanced features are not covered in this course: concurrency, threads, security
- Standards ensure portability
- Better compatability with C++

## Programming Fundamentals
- What do you want the program to do?
- Have a plan. What is the main idea of your implementation?
- Write the code and compile
- Run the program
- Fix errors (debug)
- Revise as needed

## Running your First C Program
- intro_01.c
- Write very simple program to let user enter a number and prints this number back
- Enter letters instead of numbers, Guess what happens?
- GIGO: Garbagge in - Garbagge out

## Preprocessor Commands

### Directives
```C
#include <file> //used for system header files located in the standard list of system directories
```

```C
#include "file" // used for header files of your own program
```

```C
#define name // used to define a macro - substitute name with name or value
```

```C
// Examples
#include <math.h>
#include "myHelperFunctions.h"
#define BUFFER_SIZE 1024
```

### External Headers
To define functions in external headers, and include them in your code, do the following:
- Create Header.h file, and include the prototypes
- Create Header.c file, and include the implementations
- ```#include "Header.h"``` in your source code file
- Compile both source code files, similar to ```gcc 02.c myLibrary.c -o a.out```

- 02.c
- myLibrary.h
- myLibrary.c
- Trace the source code

## Making Code More Manageable

### Breaking Up Code into Blocks
- Blocks of code designed to perform a task are called functions
- Build-in functions
```C
getchar();
printf()
```
- Programmer-defined functions
```C
int calculateSumOfTwoNumbers(a,b);
```

## Defining Variables

### Variables
- Data types that are assigned values
- Must be declared before use
```C
float height;
char letter;
int age;
```
## Using Statements and Expressions

### Expressions
- Contain variables, constants, and operators
- Evaluates to value
```C
25 + 12;
x^2;
length * width;
```
### Statements
- Code elements that execute an action
```C
age = todayDate - birthdayDate;
if(age > 18) canDrive = TRUE;
```

## Adding Comments to Code for Clarity

### Comments
- Should add useful information about the code
- Not a useful comment
```C
int number; // number is an integer
```
- Useful comment
```C
// Ratio of circumference to diameter
```C
float pi = 3.14159;
```
- Multi-line C Comments
```C
/* This
is
a
multi
line
comment
*/
```

- Single-line Comment
```C
// This is a single line comment
```

## Data Type
- Mechanism used for declaring variables or functions of different categories of data (e.g. text, numbers)
- The type determines the amount of memory (bytes) a variable requires

## Declaring and Using Integer Types

### Integer Types
![Integer Types and Sizes - Part 01](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/IntegerTypes-01.png)

![Integer Types and Sizes - Part 02](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/IntegerTypes-02.png)

- Note that: output of the following program differs from machine to another
- 03.c

## Declaring and Using Floating Point Types

![Floating-Point Types and Sizes - Part 01](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/FloatingTypes-01.png)

- 04.c

## When to use the void Type?

### The void Type
- Specifies that no value (no data) is needed
- It is a data type
- It doesn't apply to variables, except (only case)
```void *ptr;```
- It applies to functions
- Adds clarity to code and debugging

## Declaring and Using Boolean Types

### The Boolean Type
- Named after mathematician George Boole
- Denotes a value of TRUE or FALSE
- Boolean types are not defined in standard C
- 1 is equivalent to TRUE
- 0 is equivalent to FALSE
```C
#include <stdbool.h> // C99 Standard, defines a bool type as True and False
Bool var = True;
Bool var2 = False;
```
## What are strings?

### Strings
- Series of characters
- There is not string type in C
- Strings are stored in arrays of type char
```char address[30];```

### Prelude to Arrays
- Arrays: sequential collections of elements of similar type

## Implementing Techniques for Screen-Based I/O

### Input/Output
- **Input** consists of bytes of data that are entered via screen, keyboard, or network, and stored in memory
- **Output** consists of bytes of data from memory to a device like screen, printer, disk
- ```<stdio.h>``` library includes standard functionality that enables screen-based I/O

### Main I/O Functions
- **printf** - provides powerful formatting features for displaying types of data on the screen
- **scanf** - is the main vehicle for reading data from a computer screen
- Both **scanf** and **printf** offer broad conversion capabilities across data types

- 05.c
- Notice the spaces in input!
- ```getchar()``` vs. ```putchar()```

## Using Build-in String Manipulation

### Essentials of <string.h>
- One of the standard C libraries, which includes many useful string manipulation functions
```C
strcmp(str1, str2); // compare two strings
```
```C
strcpy(dest, src); // copy src onto dest
```
- String is not just a simple variable!
- Here, we take all the positions starting at position src and pasting them into positions starting at dest

```C
memcpy(dest, src, n); // copy n chars from src to dst
```

```C
strlen(str); // compute length of string
```

## Chosing Appropriate Variable Names

### Variable Names
- Choose meaningful names
- camelCase notation

### Variable Declaration
- Variables must be declared before use
- Can be declared all in one place
- Can be declared right before use
- Can be declared in external file

## Implementing Simple Assignment Statements

### Simple Assignment Statements
- Assignment statements change values of variables

```C
size = 12;
time = time + 1;
time += 1;
```
## Arithmetic Operators
![Arithmetic Operators](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/DefinedOperators.png)

## Understanding the Use of Relational Operators

![Relational Operators](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/RelationalOperators.png)

## Decision making using logical operators
- Recall the logical operators ``` && = and, ||=or```
- Logical operators can be used to make decisions
- Leverage the fact that ```1=true``` and ```0=false```
- Build a user query system to assess outcome given a set of conditions

## Performing Bit-Level Calculations with Bitwise Operations

![Bit-Level Operators](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/Bitwise.png)

![Truth Table of Bit-Level "AND"](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/TruthAND.png)

![Truth Table of Bit-Level "OR"](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/TruthOR.png)

- 06.c

## Using Assignment Operators in Complex Statements

## Implementing Mathematical Expressions

## Understanding the relationship between statements and expressions

### Expressions vs Statements
- An expression represents a single data item
- A statement carries out some definite action

### Expression Statement
```C
a = 6;
c = a + b;
++j;
```

### Compound Statement
```C
{
    pi = 3.141593;
    circumference = 2. * pi * radius;
    area = pi * radius * radius;
}
```

## Functional Programming

### Functions
- Blocks of code that perform specific tasks
  - Calculate a mathematical expression
  - Evaluate the outcome of a series of statements
  - Print results in a specific format

### Functional Programming Advantages
- Enables reusability of portions of code
- Enables breaking complex solutions into simpler steps
- Simplifies the debugging process
- Eases the processes of updating and improving code

## Passing Variables to Functions
### Parameters vs. Arguments
- Functions are mini programs, which may or may not use external data
- **Parameters** are variables defined to accept external data
- **Arguments** are the data passed onto the funtion

### Functions without Parameters
```C
void addNumbers(void){
    float x = 2.4;
    float y = 3.1;
    result = x + y;
    printf("Sum = %f", result);
}
addNumbers(); // The function call without arguments
// Function contains all needed data
```

### Functions with Parameters

A function that uses external data
```C
void addNumbers(float x, float y){
    result = x + y;
    printf("Sum = %f", result);
}
// The function is called with two arguments
addNumbers(2.6, 4.2);
// The two parameters are mapped into arguments
```


