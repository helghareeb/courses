//بسم الله الرحمن الرحيم

# include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main(void){

  // Define array and use loops to initialize elements

  // array of 5 elements
  int n[SIZE];

  // set elements of array n to 0
  for(size_t i=0; i<SIZE; ++i){
    n[i] = 0;
  }

  printf("%s%13s\n", "Element", "Value");
  for(size_t i=0; i<SIZE; ++i){
    // print elements
    printf("%7u%13d\n", i, n[i]);
}
}
