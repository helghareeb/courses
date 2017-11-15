// بسم الله الرحمن الرحيم

// *
// **
// ***
// ****
// *****
// ******
// *******

#include <stdio.h>

void drawStars(int);

int main(void)
{
    printf("Welcome to Draw Start Program\n Enter the Number of Lines: ");
    int nTimes;
    scanf("%d", &nTimes);
    drawStars(nTimes);
}

void drawStars(int nTimes){
    if (nTimes == 0) return;
    drawStars(nTimes - 1);
    for(int i = 0; i < nTimes; ++i) printf("*");
    printf("\n");
}