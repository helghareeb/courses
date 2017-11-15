// بسم الله الرحمن الرحيم

#include <stdio.h>

void printNumber(int);

int main(void){
    int number;
    scanf("%d", &number);
    printNumber(number);
    printf("\n");
}

void printNumber(int number){
    if(number){
        printNumber(number / 2);
        printf("%d", number%2);
    }
}

// E.g. 7 = 111		214 = 11010110
// If number%2 get for us last bit in binray representation
// If we could print last bit, we could print
