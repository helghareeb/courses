#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char fname[50];
    char lname[50];
    int id;
};

void printStudent(struct student * a){
    printf("Full Name is %s %s\n", a->fname, a->lname);
}

int main(void){
    // printf("Size of Struct Student: %d\n", sizeof(struct student));
    struct student * stPtr;
    stPtr = (struct student *) malloc(sizeof(struct student));
    strcpy(stPtr->fname, "Haitham");
    strcpy(stPtr->lname, "Sakr");
    stPtr->id = 3000;

    printStudent(stPtr);

    free(stPtr);
}