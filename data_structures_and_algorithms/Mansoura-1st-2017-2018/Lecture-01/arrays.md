# بسم الله الرحمن الرحيم

# Arrays Using C

## Introduction
محمد حسين ابراهيم -5
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
- **Recall** all arguments in C are passed by value
- C automatically passes arrays to functions by reference
- Called functions can modify the element values in the callers' original arrays
- Arrays names evaluates to the address of the array's first element

## Notes
- Although entire arrays are passed by reference, **individual array elements are passed by value**
- Simple single pieces of data are called **scalars**
- It is possible to pass array by value, by placing it in a Struct
- Using the **const** qualifier with array parameters prevents modification of arrays
```C
void tryToModifyArray(const int b[]){
    b[0] = 2; //error
}
```

## Examples
- **arrays_03.c** Demonstrate that the array name is the address of the first element
- **arrays_04.c** Demonstrate the difference between passing an array and passing an array element

## Sorting Arrays
- **Sorting Data** placing the data into ascending or descending order
- Here, we discuss simple sorting scheme
- Advanced sorting scheme is presented in Chapter 12 and Appendix D
- Often, the simplest algorithms perform poorly. Their virtue is that they are easy to write, test, and debug.
- More complex algorithms are often needed to realize maximum performance.

## [Bubble Sort](https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm)

```Python
# Algorithm
begin BubbleSort(list)

   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for
   
   return list
   
end BubbleSort
```
```C
// C Implementation
void bubbleSort(int array[], size_t size){
    for(size_t i=1; i<SIZE; ++i){
        for(size_t j=0; j<SIZE; ++j){
            if (array[i] < array[j]){
                int tmp;
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            } 
        }
    }
}
```

## Examples
- **arrays_05.c** - non-modular implementation
- **arrays_06.c** - modular implementation

## Searching Arrays
- Determine whether an array contains a value that matches a certain **key value**
- The process of finding a particular element of an array
- Two searching techniques:
  - Linear Search
  - Binary Search

## Linear Search
- Compare each element of the array with the **search key**
- Because the array is not in any particular order, it is just as likely that the value will be found in the first element as in the last
- On average, therefore, the program will have to compare the search key with **half** the elements of the array
- Can you identify the **Best case** ?
- Can you identify the **Worst case** ?

## Examples
- **arrays_07.c**

## Notes
- Linear search works well for small or unsorted arrays
- Linear search is not efficient for large arrays
- Linear search is not efficient for sorted arrays
- Solution?

## Binary Search
- Eliminates from consideration one-half of the elements in a sorted array after each comparison
- Algorithm:
  - locates the **middle** element of the array and compares it to the search key
  - If they **are equal**: Search key is found and the array index of that element is returned
  - If they **are not equal**: 
    - Problem is reduced to searching **one half** of the array
    - If the search **key is less than the middle element** of the array, the algorithm searches the **first half**
    - If the search **key is greater than the middle element** of the array, the algorithm searches the **second half**
  - Algorithm repeats the process
    - Search continues until the search key is equal to the middle element
    - or until subarray consists of one element that is not equal to the search key

## Iterative Binary Search
```C
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high){
    while (low <= high){
        size_t middle = (low + high) / 2;
        printRow(b, low, middle, high);
        if(searchKey == b[middle]){
            return middle;
        }
        else if (searchKey < b[middle]){
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}
```