#include <stdio.h>
#define SIZE 5

int arr[] = {19, 280, 450, 318, 40};
int findVal = 318;

int linearSearch(int arr[], int size)
{
    for (int i = 0; i < SIZE; ++i)
    {
        if (arr[i] == findVal)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x = linearSearch(arr, SIZE);
    if(x != -1){
    printf("Value found at index: %d", x);
    }
    else{
        printf("Not Found");
    }
}