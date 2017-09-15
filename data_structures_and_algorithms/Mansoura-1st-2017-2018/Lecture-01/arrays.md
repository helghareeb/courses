# Arrays Using C

## Introduction

- Data Structures consisting of related data items of the same type
- **Static Entity** it remains the same size throughout program execution
- Group of contiguous memory locations that all have the same type
- To refer to a particular location, we specify the ** array's name and the position ** of the particular element in square brackets

![Image of Arrays from Oracle](https://docs.oracle.com/javase/tutorial/figures/java/objects-tenElementArray.gif)

## Examples
- arrays_01.c

## Character Arrays
- Arrays can hold any type
- String such as "Mansoura" is really an array of individual characters in C

```C
char string1[] = "Mansoura";
// Compiler determines size of array
// string1 contains 8 characters plus a special
// termination character called "Null Character" -> "\0"

char string2[] = {'M','a','n','s','o','u','r','a','\0'};

// create string capable of storing 19 characters
char string3[20];

// scanf reads input
// here, we pass string name to scanf without & because array name is * to 1st element
scanf("%19s", string3);

// print output
printf("%s\n", string3);
```

## Examples
- arrays_02.c

## Passing Arrays to Functions
- To pass an array argument to a function, specify the array's name without any brackets.
- ** Recall ** all arguments in C are passed by value
- C automatically passes arrays to functions by reference
- Called functions can modify the element values in the callers' original arrays
- Arrays names evaluates to the address of the array's first element
- Although entire arrays are passed by reference, ** individual array elements are passed by value **

## Examples
- arrays_03.c
- Demonstrate that the array name is the address of the first element
