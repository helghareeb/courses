// Linear Search

#include <stdio.h>

#define SIZE 10

int linearSearch(int array[], int key){
    int result = -1;
    for(size_t i=0; i<SIZE; ++i){
        if(array[i] == key) result = i;
    }
    return result;
}

int main(void){
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int key = 3;
    int result = linearSearch(array, key);
    if(result == -1) printf("Key NOt Found!\n");
    else printf("Key %d found at index %d\n", key, result);
}