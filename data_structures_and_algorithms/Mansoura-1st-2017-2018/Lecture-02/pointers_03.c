#include <stdio.h>

void cubeByReference(int *xPtr){
    *xPtr = *xPtr * *xPtr * *xPtr; 
}

int main(void){
    int x = 5;
    cubeByReference(&x);
    printf("Value of x is %d\n", x);
}