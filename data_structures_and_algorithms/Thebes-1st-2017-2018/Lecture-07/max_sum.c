// بسم الله الرحمن الرحيم

#include <stdio.h>
#include <string.h>

#ifndef max
    #define max(a,b) ((a) > (b) ? (a) : (b))
#endif

#define r 2
#define c 2
// memset( buffer, '\0', sizeof(char)*ARRAY_LENGTH );

// https://raw.githubusercontent.com/mostafa-saad/ArabicCompetitiveProgramming/master/15%20C%2B%2B%20Programming%204%20Competitions/42%20C%2B%2B%20Programming%204%20Competitions%20-%20Recursion.cpp

int maxSum(int array[r][c], int, int);

int main(void){
    printf("Welcome to MaxSum Program!\n");
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int result = maxSum(arr[r][c], r,c);
    printf("Maximum is: %d\n", result);
}

int maxSum(int arr[r][c], int a, int b){
    if(r > a | c > b) return -1;
    if(r == a && c == b) return arr[r][c];
    int path1 = maxSum(arr[r+1][c], a, b);
    int path2 = maxSum(arr[r][c+1], a, b);
    return arr[0][0] + max(path1, path2);
}