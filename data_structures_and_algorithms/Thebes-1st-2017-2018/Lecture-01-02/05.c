#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char name[20], address[30];

    char c;
    printf("How do you feel on a scale of 1-5?");
    c = getchar();

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter your address: ");
    scanf("%s", &address);

    printf("Entered Name: %s\n", name);
    printf("Entered address:%s\n", address);

    printf("You said you feel: ");
    putchar(c);

    return EXIT_SUCCESS;
}