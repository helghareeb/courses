//بسم الله الرحمن الرحيم

#include <stdio.h>
#define MAXSIZE 5


int main(void){
    int arr[MAXSIZE]={1,2,3,4,5};
    int* intPtr;
    intPtr = arr;

    for(int i=0; i<MAXSIZE; i++){
        printf("%p refers to value %d\n", intPtr, *intPtr);
        intPtr++;
    }

}