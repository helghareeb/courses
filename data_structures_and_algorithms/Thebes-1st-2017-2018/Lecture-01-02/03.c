// بسم الله الرحمن الرحيم

// Program to get the maximum storage size of different variable data types

#include <stdio.h>

int main(void){
    puts("Memory size of each type");
    puts("-------------------------");
    // Sizes of integer types
    printf("Storage size for char:              %lu bytes\n", sizeof(char));
    printf("Storage size for unsigned char:     %lu bytes\n", sizeof(unsigned char));
    printf("Storage size for signed char:       %lu bytes\n", sizeof(signed char));
    printf("Storage size for int:               %lu bytes\n", sizeof(int));
    printf("Storage size for unsigned int:      %lu bytes\n", sizeof(unsigned int));
    printf("Storage size for short:             %lu bytes\n", sizeof(short));
    printf("Storage size for unsigned short:    %lu bytes\n", sizeof(unsigned short));
    printf("Storage size for long:              %lu bytes\n", sizeof(long));
    printf("Storage size for unsigned long:     %lu bytes\n", sizeof(unsigned long));
    printf("Storage size for long long:         %lu bytes\n", sizeof(long long));
    printf("Storage size for void:              %lu bytes\n", sizeof(void));
}