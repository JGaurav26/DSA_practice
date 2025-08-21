// CIRCULAR DOUBLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
    struct node *prev;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL && *Tail == NULL){
        *Head = newn;
        (*Tail)->next = newn;
    } else{
        
    }
}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head, PPNODE Tail){}

void DeleteLast(PPNODE Head, PPNODE Tail){}

void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc){}

void Display(PNODE Head, PNODE Tail){}

int Count(PNODE Head, PNODE Tail){return 0;}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    
    return 0;
}