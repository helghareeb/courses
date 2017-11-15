// بسم الله الرحمن الرحيم

#include <stdio.h>

int factorial(int);

int main(void){
    printf("Welcome to Factorial Program\n Enter a number to calculate its factorial: ");
    int x;
    scanf("%d", &x);
    int result = factorial(x);
    printf("Factorial of number %d is %d\nHave a Nice Day!", x, result);
}

int factorial(int x){
    if (x <=1) return 1;
    else return x * factorial(x-1);
}