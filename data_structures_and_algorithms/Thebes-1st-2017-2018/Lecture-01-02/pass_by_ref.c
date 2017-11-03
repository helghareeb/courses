#include <stdio.h>

void incrementByOne(int* x){
    //x ++;
    *x = *x + 1;
    //printf("Inside function, value of x is: %d\n", x);
}

int main(void){
    int x = 5;
    printf("Value of x: %d\n", x);

    incrementByOne(&x);

    printf("Value of x: %d\n", x);
}