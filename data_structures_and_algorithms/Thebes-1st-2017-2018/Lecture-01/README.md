# بسم الله الرحمن الرحيم

## C Programming Language

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
![Integer Types and Sizes](http://github.com/helghareeb/courses/data_structures_and_algorithms/Thebes-1st-2017-2018/Lecture-01/img/IntegerTypes.png)