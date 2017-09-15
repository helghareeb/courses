//بسم الله الرحمن الرحيم

// Bubble Sort Implementation

#include <stdio.h>
#define SIZE 10

void bubbleSort(int array[], size_t size){
    for(size_t i=1; i<SIZE; ++i){
        for(size_t j=0; j<SIZE; ++j){
            if (array[i] < array[j]){
                int tmp;
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            } 
        }
    }
}

int main(void){
    int array[] = {9,8,7,6,5,4,3,2,1,0};
    
    bubbleSort(array, SIZE);

    for(size_t i=0; i<SIZE; ++i){
        printf("%d\t", array[i]);
    }
    puts("");
}