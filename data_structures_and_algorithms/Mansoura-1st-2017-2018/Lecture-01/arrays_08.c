//بسم الله الرحمن الرحيم

// Iterative Binary Search

#include <stdio.h>
#define SIZE 15

// function prototypes
size_t binarySearch(const int b[], int searchKey, size_t low, size_t hight);
void printHeader(void);
void printRow(const int b[], size_t low, size_t middle, size_t high);

int main(void){
    int a[SIZE];
    
    for (size_t i=0; i<SIZE; ++i){
        a[i] = 2 * i;
    }

    printf("%s", "Enter a number between 0 and 28: ");
    int key;
    scanf("%d", &key);

    printHeader();

    size_t result = binarySearch(a, key, 0, SIZE - 1);

    if (result != -1){
        printf("\n%d found at index %d\n", key, result);
    }
    else{
        printf("\n%d not found\n", key);
    }
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high){
    while (low <= high){
        size_t middle = (low + high) / 2;
        printRow(b, low, middle, high);
        if(searchKey == b[middle]){
            return middle;
        }
        else if (searchKey < b[middle]){
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}

void printHeader(void){
    puts("\nIndices:");
    
    for(unsigned int i = 0; i < SIZE; ++i){
        printf("%3u ", i);
    }

    puts("");

    for (unsigned int i = 1; i <= 4 * SIZE; ++i){
        printf("%s", "-");
    }

    puts("");
}

void printRow(const int b[], size_t low, size_t mid, size_t high){
    for (size_t i = 0; i < SIZE; ++i){
        if ( i < low || i > high) {
            printf("%s","    ");
        }
        else if (i == mid){
            printf("%3d*", b[i]);
        }
        else {
            printf("%3d ", b[i]);
        }
    }
    puts("");
}