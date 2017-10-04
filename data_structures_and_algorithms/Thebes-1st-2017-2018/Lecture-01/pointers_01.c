# include <stdio.h>

int main(void){
    int x = 5;
    printf("Value of x is: %d\n", x);

    printf("Memory Address of x is: %p\n", &x);

    int * xPtr = &x;

    printf("Value of xPtr is: %p\n", xPtr);

    printf("Value that xPtr points to is: %d\n", *xPtr);

    *xPtr = 6;
    printf("Value of x is: %d\n", x);
}