# include <stdio.h>

void func1(int, int);

int func2(int, int);

int main(void){
	func1(2,5);
	int x = func2(2,5);
	printf("main: %d\n", x);
}


void func1(int a, int b){
	printf("func1: %d\n", a+b);
}

int func2(int a, int b){
	return 10;
}


