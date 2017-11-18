#include <stdio.h>

void ErrorrecursiveFunction(){
    // Error
    printf("I will call me inifinitely!\n");
    ErrorrecursiveFunction();
}

void recursiveFunction(int count){
    if (count < 1) return;
    //printf("Count = %i\n", count);
    recursiveFunction(count - 1);
    printf("Count = %i\n", count);
}

int main(void){
    recursiveFunction(3);
}