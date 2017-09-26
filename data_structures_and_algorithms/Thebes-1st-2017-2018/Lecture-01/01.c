// بسم الله الرحمن الرحيم

// Write very simple program to let user enter
// a number and prints this number back

#include <stdio.h>
int main(void){
    int aNumber;
    printf("Please enter a number: ");
    scanf("%d", &aNumber);
    printf("You entered %d\n", aNumber);
    return 0;
}