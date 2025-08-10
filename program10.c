// DOUBLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int iNo){}
void InsertLast(PPNODE Head, int iNo){}
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head){}
void DeleteLast(PPNODE Head){}
void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head){}
int count (PNODE Head){return 0;}


int main()
{
    PNODE First = NULL;
    return 0;
}