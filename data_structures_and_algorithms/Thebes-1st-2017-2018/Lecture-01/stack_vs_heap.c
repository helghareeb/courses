#include <stdio.h>
#include <string.h>

int main(void){
    char a[] = "ahmed";
    char b[] = "ahmed";

    if(a==b) printf("success\n");
    else printf("not equal\n");

    if(strcmp(a,b)==0) printf("success\n");
    else printf("not equal\n");

    char c[] = "mohamed";
    char d[] = "mahmoud";

    //a = b;
    //d = c;
    strcpy(d, c);

    printf("d variable value is: %s\n", d);
}