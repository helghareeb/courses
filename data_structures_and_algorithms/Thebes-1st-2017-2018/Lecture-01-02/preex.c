#define BUFFER_SIZE 1024

#include <stdio.h>

int main(void){
	int x = BUFFER_SIZE + 500;
	printf("Original Buffer Size Value is: %d\n", BUFFER_SIZE );
	printf("Modified Buffer Size Value is: %d\n", x);
}
