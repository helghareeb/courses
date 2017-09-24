#include <stdio.h>

int main(void){
    int y = 5;
    printf("Memory Address of variable %c with value %d is %p\n", 'y', y, &y);

    int *yPtr = &y;
    printf("Value ");
    printf("Value inside Memory Address %p is %d\n", &y, *yPtr);
}