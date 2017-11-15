// بسم الله الرحمن الرحيم

#include <stdio.h>

void drawStars(int);

int main (void){
    printf("Welcome to Draw inverted Stars Program\nPlease Enter number of lines:");
    int nTimes;
    scanf("%d", &nTimes);
    drawStars(nTimes);
}

void drawStars(int nTimes){
    if (nTimes == 0) return;
    for (int i = 0; i < nTimes; ++i) printf("*");
    printf("\n");
    drawStars(nTimes - 1);
}