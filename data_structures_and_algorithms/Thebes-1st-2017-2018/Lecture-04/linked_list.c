#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    // self refrential struct
    int id;
    char fname[50];
    char lname[50];
    struct student *nextPtr;
};

void printLinkedList(struct student * a){
    // Use do while to ensure printing first element
    do
    {
        printf("Full Name is %s %s\n", a->fname, a->lname);
        // printf("Next Student Pointer %p\n", a->nextPtr);
        a = a->nextPtr;
    }while(a->nextPtr != NULL);
    
    // Prints last element
    if(a->nextPtr == NULL){
        printf("Full Name is %s %s\n", a->fname, a->lname);
    }
}

int main(void){
    struct student * headPtr = NULL;

    struct student * st1Ptr;
    st1Ptr = (struct student *) malloc(sizeof(struct student));
    headPtr = st1Ptr;
    strcpy(st1Ptr->fname, "Marwan");
    strcpy(st1Ptr->lname, "Hassan");
    st1Ptr->id = 1;
    st1Ptr->nextPtr = NULL;

    struct student * st2Ptr;
    st2Ptr = (struct student *) malloc(sizeof(struct student));
    strcpy(st2Ptr->fname, "Hossam");
    strcpy(st2Ptr->lname, "Ahmed");
    st2Ptr->id = 2;
    st2Ptr->nextPtr = NULL;
    st1Ptr->nextPtr = st2Ptr;

    struct student * st3Ptr;
    st3Ptr = (struct student *) malloc(sizeof(struct student));
    strcpy(st3Ptr->fname, "Abdel Rahman");
    strcpy(st3Ptr->lname, "Mohammed");
    st3Ptr->id = 3;
    st3Ptr->nextPtr = NULL;
    st2Ptr->nextPtr = st3Ptr;

    // if condition makes sure there is atleast one student
    if (headPtr != NULL){
    printLinkedList(headPtr);
}

    free(st1Ptr);
    free(st2Ptr);
    free(st3Ptr);

}

