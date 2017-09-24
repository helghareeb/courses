# بسم الله الرحمن الرحيم

# Pointers

## Pointers enable programs to
- accomplish pass-by-reference
- pass functions between functions
- create and manipulate dynamic data structures
  - ones that can grow and shrink at execution time

## Pointer Variable Definitions and Initialization
- Pointers are variables whose values are **memory addresses**
- Normally, a variable directly contains a specific value
- Pointer, contains **address** of a variable
- Variable **directly references** a value
- Pointer **indirectly references** a value
- Referencing value through pointer is called **indierction**

![Image of Pointer vs. Variable](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Mansoura-1st-2017-2018/Lecture-02/pointers-01.png)

## Declaring Pointers
- Pointers must be defined before they can be used
```C
int *countPtr, count;
```
- This line of code, specifies a pointer to an integer
- count is defined to be an **int** not a pointer
- The asterisk ( * ) notation used to declare pointer variables does not distribute to all variable names in a declaration. 
- Each pointer must be declared with the * prefixed to the
name
- We prefer to include the letters Ptr in pointer variable names to make it clear that these
variables are pointers and need to be handled appropriately.

## Initializing and Assigning Values to Pointers
- Pointers should be initialized when they’re defined
- Pointer may be initialized to NULL , 0 or an address
- Pointer with the value **NULL** points to nothing
- **NULL** is a symbolic constant defined in the ```<stddef.h>``` header (and several other
headers, such as ```<stdio.h>``` )
- Initializing a pointer to 0 is equivalent to initializing a pointer to NULL , but NULL is preferred

## Pointer Operators

### Address (&) Operator
- Unary operator
- returns an **address** of operand
```C
int y = 5;
int *yPtr;
yPtr = &y;
```
![Image of Pointer vs. Variable](https://github.com/helghareeb/courses/blob/master/data_structures_and_algorithms/Mansoura-1st-2017-2018/Lecture-02/pointers-01.png)

### Indirection (*) Operator
- Unary operator
- commonly refereed to as ***dereferencing operator**
- returns **value** of operand (which is a pointer)
```C
printf("%d", *yPtr);
```

- pointers_01.c

## Passing Arguments to Functions by Reference

- Functions often require the capability to modify variables in the caller
- Functions can receive a pointer to a large data object to avoid the overhead of receiving the object by value (which incurs the time and memory overheads of making a copy of the object)
- Enable a function to “return” multiple values to its caller by modifying variables in the caller

### Cube By Value
- pointers_02.c

### Cube By Reference
- pointers_03.c

# Structs

- Structures are derived data types
- They’re constructed using objects of other types. 
- Consider the following structure definition
```C
struct student {
char fname[50];
char lname[50];
};
```
- structs_01.c

## Pointers to Structs
- You can define pointers to structures in the same way as you define pointer to any other variable
```C
struct Books *struct_pointer;
```
- Now, you can store the address of a structure variable in the above defined pointer variable. 
- To find the address of a structure variable, place the '&'; operator before the structure's name as follows
```C
struct_pointer = &Book1;
```
- To access the members of a structure using a pointer to that structure, you must use the → operator as follows
```C
struct_pointer->title;
```
- structs_02.c

## Self-Referential Structures

- A variable of a struct type cannot be declared in the definition of that same struct type.
- A pointer to that struct type, however, may be included. For example, in struct employee2
```C
struct employee2 {
char firstName[20];
char lastName[20];
unsigned int age;
char gender;
double hourlySalary;
struct employee2 teamLeader; // ERROR
struct employee2 *teamLeaderPtr; // pointer
};
```
- the instance of itself ( teamLeader ) is an error. 
- Because teamLeaderPtr is a pointer (to type struct employee2 ), it’s permitted in the definition. 
- A structure containing a member that’s a pointer to the same structure type is referred to as a self-referential structure. 
- Self-referential structures are used to build linked data structures.

# Data Structures
## Fixed Size Data Structures
- Such as: arrays, and structs
## Dynamic Data Structures
- Can grow and shrink at execution time
- **Linked lists** are collections of data items “lined up in a row”, insertions and deletions are made anywhere in a linked list
![Image of Linked List](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d4/CPT-LinkedLists-deletingnode.svg/380px-CPT-LinkedLists-deletingnode.svg.png)
- **Stacks** are important in compilers and operating systems, insertions and deletions are made only at one end of a stack—its **top**
![Image of Stack](https://upload.wikimedia.org/wikipedia/commons/b/b4/Lifo_stack.png)
- **Queues** represent waiting lines; insertions are made only at the back (also referred
to as the tail) of a queue and deletions are made only from the front (also referred
to as the head) of a queue
![Image of Queue](http://www.studytonight.com/data-structures/images/introduction-to-queue.png)
- **Binary trees** facilitate high-speed searching and sorting of data, efficiently eliminating duplicate data items and compiling expressions into machine language.
![Binary Tree](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f7/Binary_tree.svg/1200px-Binary_tree.svg.png)

## Dynamic Memory Allocation in C
- Creating and maintaining dynamic data structures that can grow and shrink as the program runs requires **dynamic memory allocation**
— **Dynamic Memory Allocation** the ability for a program to obtain more memory space at execution time to hold new nodes, and to release space no longer needed.
- Functions **malloc** and **free** , and operator **sizeof** , are essential to dynamic memory allocation. 
- Function **malloc** takes as an argument the number of bytes to be allocated and returns a pointer of type **void *** (pointer to void) to the allocated memory. 
- **void *** pointer may be assigned to a variable of any pointer type. 
- Function malloc is normally used with the sizeof operator. 
- For example, the statement
```C
newPtr = malloc(sizeof(struct node));
```
  - evaluates sizeof(struct node) to determine a struct node object’s size in bytes, 
  - allocates a new area in memory of that number of bytes and stores a pointer to the allocated memory in newPtr 
- The memory is not guaranteed to be initialized, though many implementations initialize it for security. 
- If no memory is available, malloc returns NULL
- Function **free** deallocates memory—i.e., the memory is returned to the system so that it can be reallocated in the future. To free memory dynamically allocated by the preceding malloc call, use the statement
```C
free(newPtr);
```