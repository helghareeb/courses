#include <stdio.h>

#define SIZE 5

//function prototypes
void modifyArray(int b[], size_t size);
void modifyElement(int e);

int main(void){
  int a[SIZE] = {0,1,2,3,4};

  puts("Effects of passing entire array by reference:\n\nThe values of the original array are:");

  for(size_t i=0; i < SIZE; ++i){
    printf("%3d", a[i]);
  }
  puts(""); // outputs a new line

  modifyArray(a, SIZE); // notice here we called using Array Name

  // output modified array
  puts("The values of the modified array are:\n");
  for(size_t i=0; i < SIZE; ++i){
    printf("%3d", a[i]);
  }

  // output value of a[3]
  printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n", a[3]);

  modifyElement(a[3]);

  printf("The value of a[3] is %d\n", a[3]);

}

void modifyArray(int b[], size_t size){
  // multiply each array element by 2
  for (size_t j=0; j<SIZE; ++j){
    b[j] *= 2;
  }
}

void modifyElement(int e){
  printf("Value in modifyElement is %d\n", e*=2);
}
