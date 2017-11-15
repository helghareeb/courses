// بسم الله الرحمن الرحيم


// Starting from n, 
//  if odd moves to 3n+1
//  If even moves to n/2
//  If 1, stop
// Previous function return length of sequence
//  ex. 5 16 8 4 2 1

#include <stdio.h>

// Prototype
int threeNPlusOne(int);

int counter = 0;

int main(void){
    printf("Welcome to 3n+1 Programm\n Please enter a number: ");
    int x;
    scanf("%d", &x);
    threeNPlusOne(x);
    printf("Length of Sequence for number %d is %d\n Have a nice Day!\n", x, counter);
}

// Checking if a number is Even or Odd using Bitwise Operator
// http://blockofcodes.blogspot.com.eg/2014/08/checking-if-number-is-even-or-odd-using-bitwise-operator.html

int threeNPlusOne(int x){
    counter ++;
    if (x == 1) return 0;
    if (x&1) return threeNPlusOne(3*x + 1);
    else return threeNPlusOne(x/2);
}