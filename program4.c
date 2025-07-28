// template for SINGLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    PNODE next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// CALL BY ADDRESS MECHANISM
void InsertFirst(struct node ** Head, int iNo)
{

}

void InsertLast(struct node ** Head)
{

}

void InsertAtLoc(struct node ** Head, int iNo, int iLoc)
{

}

void DeleteFirst(struct node ** Head)
{

}

void DeleteLast(struct node ** Head)
{

}

void DeletAtLoc(struct node ** Head, int iLoc)
{

}

// CALL BY VALUE MECHANISM
void Display(struct node * Head)
{

}

void Count(struct node * Head)
{

}



int main()
{
    PNODE First = NULL;
    return 0;
}