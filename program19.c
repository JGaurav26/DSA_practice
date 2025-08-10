// CIRCULAR LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo){}
void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}
void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head, PPNODE Tail){}
void DeleteLast(PPNODE Head, PPNODE Tail){}
void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc){}

void display(PNODE Head, PNODE Tail){}
int count (PNODE Head, PNODE Tail){return 0;}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}