// بسم الله الرحمن الرحيم

#include <stdio.h>

#define MAXSIZE 10

void mergeSort(int *, int, int);

int main(void){
    int arr[MAXSIZE];
    mergeSort(arr, 0, MAXSIZE);
    for (int i = 0; i < MAXSIZE; ++i) printf("%d\t", arr[i]);
}

// Phase One
void mergeSort(int *array, int low, int high){
    //divide
    if (low < high) {
        int med = high + low / 2;
        mergeSort(array, low, med);
        mergeSort(array, med+1, high);
    } // conqure
}