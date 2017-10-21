// بسم الله الرحمن الرحيم

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    char fname[50];
    char lname[50];
    int id;
};

int main(void){
    // struct student csSecond[40000000];
    
    struct student * st1;
    struct student * st2;
    struct student * st3;
    st1 = (struct student *) malloc(sizeof(struct student));
    st2 = (struct student *) malloc(sizeof(struct student));
    st3 = (struct student *) malloc(sizeof(struct student));

    // struct student st1;
    strcpy(st1->fname, "Marwan");
    strcpy(st1->lname, "Hassan");

    // struct student st2;
    strcpy(st2->fname, "Marwan");
    strcpy(st2->lname, "Hassan");

    // struct student st3;
    strcpy(st3->fname, "Marwan");
    strcpy(st3->lname, "Hassan");
}


