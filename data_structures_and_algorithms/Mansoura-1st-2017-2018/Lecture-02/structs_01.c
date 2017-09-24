#include <stdio.h>
#include <string.h>

struct Doctor{
    char fname[50];
    char lname[50];
    int age;
    int *DoB;
};

void printDoctor(struct Doctor a){
    printf("Welcome to Print Doctor Function\n");
    printf("Doctor's Full Name is: %s %s\n", a.fname, a.lname);
    printf("Doctor's Age is %d\n", a.age);
    printf("Doctor's DoB is %d\n", a.DoB);
}

int main(void){

struct Doctor haitham;
strcpy(haitham.fname, "Haitham");
strcpy(haitham.lname, "El-Ghareeb");
haitham.age = 62;
haitham.DoB = 1970;

printDoctor(haitham);
}