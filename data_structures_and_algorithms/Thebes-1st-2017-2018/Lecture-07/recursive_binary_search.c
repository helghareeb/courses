// بسم الله الرحمن الرحيم

#include <stdio.h>

#define SIZE 5

// Prototypes
void bubbleSort(int arr[], int size);
int binarySearch(int arr[], int key, int start, int end);
int recursiveBinarySearch(int arr[], int key, int start, int end);

int main()
{
    int arr[] = {90, 80, 70, 60, 50};
    bubbleSort(arr, SIZE);
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d\n", arr[i]);
    }
    // int ind = binarySearch(arr, 90, 0, SIZE - 1);
    int ind = recursiveBinarySearch(arr, 60, 0, SIZE - 1);
    if (ind != -1)
    {
        printf("Item found at index: %d\n", ind);
    }
    else
    {
        printf("Item not found\n");
    }
}

// Implementation
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] < arr[j])
            {
                //swap
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int binarySearch(int arr[], int key, int start, int end)
{
    while (start <= end)
    {

        int middle = (start + end) / 2;

        if (arr[middle] == key)
        {
            return middle;
        }
        else if (key < arr[middle])
        {
            end = middle - 1;
        }
        else
        {

            start = middle + 1;
        }
    }
    return -1;
}

int recursiveBinarySearch(int arr[], int key, int start, int end)
{
    int index = -1;
    int middle = (start + end) / 2;

    if (start > end) return index;
    if (arr[middle] == key)
    {
        return middle;
    }
    else if (key < arr[middle])
    {
        // end = middle - 1;
        index = recursiveBinarySearch(arr, key, start, middle - 1);
    }
    else
    {

        // start = middle + 1;
        index = recursiveBinarySearch(arr, key, middle + 1, end);
        
    }
return index;
}
