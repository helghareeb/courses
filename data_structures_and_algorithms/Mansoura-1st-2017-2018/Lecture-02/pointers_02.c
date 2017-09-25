#include <stdio.h>

int cubeByValue(int x){
    return x * x * x;
}

int main(void){
    int x = 5;
    printf("Cube of x is: %d\n", cubeByValue(x));
    printf("%d\n", x);
}