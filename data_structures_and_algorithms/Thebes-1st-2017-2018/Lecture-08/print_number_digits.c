// بسم الله الرحمن الرحيم

#include <stdio.h>

void printNumber(int);

int main(void){
    int number;
    scanf("%d", &number);
    printNumber(number);
}

void printNumber(int n){        // 214
    if(n){
        printNumber(n/10);      // print 21
        printf("%d\n", n%10);   // when returns, prints 4
    }
}