#include <stdio.h>

int main(void){
    puts("Bit-Level Calculations:");
    puts("-----------------------");

    unsigned int x = 10;
    unsigned int y = 1;
    unsigned int result;

    result = x & y;
    printf("x & y = %d\n", result);

    result = x | y;
    printf("x | y = %d\n", result);

    result = x ^ y; // XOR Operator
    printf("x ^ y = %d\n", result);

    // Right-shift 1 is equivalent to dividing by 2
    result = x >> 1;
    printf("x >> 1 = %d\n", result);

    // Left-shift 1 is equivalent to multiplying by 2
    result = y << 1;
    printf("y << 1 = %d\n", result);
}